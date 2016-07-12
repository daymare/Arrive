<head>
    <link rel="stylesheet" type="text/css" href="styleSheet.css">
    <title>Did you attend class today?</title>

    <style>
        div.fixed 
        {
            position: fixed;
            bottom: 0;
            right: 0;
        }
    </style>

    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.0/jquery.min.js"></script>
    <script>
        $(document).ready(function()
        {
            $("button").click(function()
            {
                alert($("#text").attr("input"));
                
                $.post("<something>.php", <data>, 
                    function (<parameters>)
                    {
                        alert("got a thing!");
                    }
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

            <form>
                First Name:<br>
                <input type="text" id = "field1" name="First Name"><br>

                Last Name:<br>
                <input type="text2" id = "field2" name="Last Name"><br>
     
                Username:<br>
                <input type="text3" id = "field1" name="username"><br>

                Password:<br>
                <input type="text4" id = "field2" name="password"><br>

                Confirm Password: <br>
                <input type="text5" id="field3" name="confirm password"><br>

                ID Number: <br>
                <input type="text6" id = "field3" name="idnumber"><br>
            </form>

            <button onclick="ConfirmSignUp()">Confirm</button>

        </div>
    </centered>

    <script>

        function ConfirmSignUp() 
        {
            $.post('example.php').success(function(resp)
            {
                json = $.parseJSON(resp);
                alert(json);
            });
        }

    </script>

    <div class="fixed">
        &#xA9; 2016 CougsAttend
    </div>

</body>
