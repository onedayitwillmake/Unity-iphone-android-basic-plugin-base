package com.onedayitwillmake.OnedayPlugin;

/**
 * Bridge
 * A bridge of static methods for unity
 * @author Mario Gonzalez
 */
public class Bridge {
    public static String ReturnString() {
        return "A Static String";
    }

    public static int ReturnInt(){
        return 17;
    }

    public int ReturnInstanceInt(){
        return 1983;
    }

    public String ReturnInstanceString(){
        return "This is an instance string!";
    }
}
