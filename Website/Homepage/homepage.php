<head>
<link rel="stylesheet" type="text/css" href="styleSheet.css">
<title>Did you attend class today?</title>

<style>
div.fixed {
    position: fixed;
    bottom: 0;
    right: 0;
}
</style>

<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.0/jquery.min.js"></script>
<script>

$(document).ready(function(){
    $("button").click(function(){
       alert($("#text").attr("input"));
    });
});
</script>

</head>

<body>


<banner>
<img src="http://i63.tinypic.com/2znrf9z.jpg" style="max-height: 100%; max-width: 100%;"/>
</banner>

<centered>
<div>
        <!-- sign in stuff -->
	<form>
            Username:<br>
            <input type="text" id = "field1" name="username"><br>
            Password:<br>
            <input type="text2" id = "field2" name="password"><br>
            ID Number: <br>
            <Input type="text3" id = "field3" name="idnumber"><br>
            Code:<br>
            <Input type="text4" id = "field4" name="code"><br>
       	</form>
        <button onclick="SignIn()">Sign in</button>

        <!-- signup page button redirect  -->
        <FORM METHOD="LINK"ACTION="..\Signup_page\signup_page.php">
        <INPUT TYPE="submit"VALUE="Sign up">
        </FORM>

</div>
</centered>

	<script>
	function SignIn() 
	{
               $.post( 
          'example.php'
       ).success(function(resp){
            json = $.parseJSON(resp);
            alert(json);
       });
	}

        function GotoSignup()
        {
            // redirect to sign up page
        
        }
	</script>

<div class="fixed">
&#xA9; 2016 CougsAttend
</div>

</body>
