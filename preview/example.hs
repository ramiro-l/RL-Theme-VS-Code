-- This is a simple Haskell program that demonstrates basic syntax and features.

-- Function to add two numbers
add :: Int -> Int -> Int
add a b = a + b

main :: IO ()
main = do
    -- Variable declaration
    let greeting = "Hello, world!"

    -- Printing the greeting
    putStrLn greeting

    -- Calling the add function and printing the result
    let result = add 5 3
    putStrLn ("5 + 3 = " ++ show result)
