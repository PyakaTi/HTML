<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <script src="https://cdn.tailwindcss.com"></script>
    <title>Your Game Store</title>
    <link rel="shortcut icon" type="image/x-icon" href="{{ asset('favicon.ico')}}" />
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f4f4f4;
        }

        header {
            background-color: #333;
            color: #fff;
            padding: 10px;
            display: flex;
            justify-content: space-between;
            align-items: center;
        }

        .header-buttons {
            background-color: transparent;
            display: flex;
            gap: 10px;
            border: none;
        }

        .language-button,
        .profile-button {
            background-color: #3498db;
            color: #fff;
            border: none;
            padding: 10px 20px;
            border-radius: 5px;
            cursor: pointer;
            transition: background-color 0.3s;
        }

        .language-button:hover,
        .profile-button:hover {
            background-color: #2980b9;
        }

        .discover-button,
        .browse-button,
        .news-button {
            background-color: transparent;
            color: #777;
            border: none;
            padding: 10px 20px;
            cursor: pointer;
            transition: color 0.3s;
        }

        .discover-button:hover,
        .browse-button:hover,
        .news-button:hover {
            background-color: transparent;
            color: #fff;
        }

        section {
            display: flex;
            justify-content: space-around;
            flex-wrap: wrap;
            padding: 20px;
        }

        div {
            background-color: #fff;
            border: 1px solid #ddd;
            border-radius: 8px;
            padding: 15px;
            margin: 10px;
            text-align: center;
        }

        img {
            max-width: 100%;
            height: auto;
            border-radius: 8px;
            margin-bottom: 10px;
        }

        h3 {
            color: #333;
        }

        p {
            color: #666;
        }

        button {
            background-color: #3498db;
            color: #fff;
            border: none;
            padding: 10px 20px;
            border-radius: 5px;
            cursor: pointer;
            transition: background-color 0.3s;
        }

        button:hover {
            background-color: #2980b9;
        }

        footer {
            background-color: #333;
            color: #fff;
            text-align: center;
            padding: 10px;
            position: fixed;
            bottom: 0;
            width: 100%;
        }
    </style>

</head>

<body class="bg-white-100 font-sans fong-light antialiased">

    <header>
        <img class="w-20" "logo-img" src="my_logo.png" alt="Logo">
        <h1 class="flex flex-row justify-between px-2">Your Game Store</h1>
        <div class="header-buttons">
            <button class="language-button">Language</button>
            <button class="profile-button">Profile</button>
        </div>
    </header>

    <div class="header-buttons">
    <div class="search-bar">
                <input type="text" placeholder="Search...">
            </div>
        <button class="discover-button">Discover</button>
        <button class="browse-button">Browse</button>
        <button class="news-button">News</button>
    </div>

    <section>
        <div>
            <img class="w-64" style="max-height: 250px" src="game1.jpg" alt="Game 1">
            <h3>Game 1 Title</h3>
            <p>Description of Game 1.</p>
            <button>Buy Now</button>
        </div>

        <div>
            <img class="w-64" style="max-height: 250px" src="game2.jpg" alt="Game 2">
            <h3>Game 2 Title</h3>
            <p>Description of Game 2.</p>
            <button>Buy Now</button>
        </div>

        <div>
            <img class="w-64" style="max-height: 250px" src="game3.jpg" alt="Game 3">
            <h3>Game 3 Title</h3>
            <p>Description of Game 3.</p>
            <button>Buy Now</button>
        </div>

        <div>
            <img class="w-64" style="max-height: 250px" src="game4.jpg" alt="Game 4">
            <h3>Game 4 Title</h3>
            <p>Description of Game 4.</p>
            <button>Buy Now</button>
        </div>
    </section>
    <section>
        <div>
            <img class="w-64" style="max-height: 250px" src="game5.jpg" alt="Game 5">
            <h3>Game 5 Title</h3>
            <p>Description of Game 5.</p>
            <button>Buy Now</button>
        </div>

        <div>
            <img class="w-64" style="max-height: 250px" src="game6.jpg" alt="Game 6">
            <h3>Game 6 Title</h3>
            <p>Description of Game 6.</p>
            <button>Buy Now</button>
        </div>

        <div>
            <img class="w-64" style="max-height: 250px" src="game7.jpg" alt="Game 7">
            <h3>Game 7 Title</h3>
            <p>Description of Game 7.</p>
            <button>Buy Now</button>
        </div>

        <div>
            <img class="w-64" style="max-height: 250px" src="game8.jpg" alt="Game 8">
            <h3>Game 8 Title</h3>
            <p>Description of Game 8.</p>
            <button>Buy Now</button>
        </div>
    </section>


    <div class="flex flex-row" style="border: none; background-color: transparent;">
    <div class="w-1/2 bg-green-500 flex flex-col space-y-2">  
    <h1 class="text-3xl font-bold"> The game awards </h1>
    <p> Description of the game <p>
    <p> Description of the awards <p>
    </div>
    <div class="w-1/2 bg-gray-500">
    <img class="w-64" src="bg3.jpg" alt="Baldurs Gate 3">
    </div>     
    </div>

    <div class="flex flex-row" style="border: none; background-color: transparent; margin-bottom: 40px;">
    <div class="w-1/3"> 
    <img style="width: 100%; height: 85%;" src="sale.jpg" alt="Sales"> 
    <h1 class="font-bold"> Sales </h1>
    </div>
    <div class="w-1/3">  
    <img style="width: 100%; height: 85%;" src="free.jpg" alt="Free"> 
    <h1 class="font-bold"> Free </h1>
    </div>
    <div class="w-1/3">
    <img style="width: 100%; height: 85%;" src="apps.jpg" alt="Apps">   
    <h1 class="font-bold"> Apps </h1>
    </div>  
    </div>


    <footer>
        <p>&copy; 2023 Your Game Store. All rights reserved.</p>
    </footer>

</body>
</html>
