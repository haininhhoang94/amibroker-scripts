function GetVisibleBarCount()
{
	lvb = Status("lastvisiblebar");
	fvb = Status("firstvisiblebar"); 

	return Min( Lvb - fvb, BarCount - fvb );
} 

function GfxConvertBarToPixelX( bar )
{
	lvb = Status("lastvisiblebar");
	fvb = Status("firstvisiblebar");
	pxchartleft = Status("pxchartleft");
	pxchartwidth = Status("pxchartwidth"); 

	return pxchartleft + bar  * pxchartwidth / ( Lvb - fvb + 1 );
} 

function GfxConvertValueToPixelY( Value )
{
	local Miny, Maxy, pxchartbottom, pxchartheight; 

	Miny = Status("axisminy");
	Maxy = Status("axismaxy"); 

	pxchartbottom = Status("pxchartbottom");
	pxchartheight = Status("pxchartheight"); 

	return pxchartbottom - floor( 0.5 + ( Value - Miny ) * pxchartheight/ ( Maxy - Miny ) );
} 