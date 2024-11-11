for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;   
            max = arr[i];      
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    if (secondMax == -1) {
        cout << "No second largest element found (all elements are the same)." << endl;
    } else {
        cout << "The second largest value is: " << secondMax << endl;
    }
