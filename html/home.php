

<html>
<head>
</head>
<body>
<script> 
function readCookie()
{
	var allcookies=document.cookie;
	document.write("all cookies:"+allcookies);
	cookiearray=allcookies.split(';');
	for(var i=0;i<cookiearray.length;i++)
	{
		
		name=cookiearray[i].split('=')[0];
		value=cookiearray[i.split('=')[1];
		document.write ("Key is : " + name + " and Value is : " + value); 
	}
}
</script>
<form name="myform"action="get">
<input type="button" value="getcookie"onclick="readCookie();"/>
</form>
</body>
</html>