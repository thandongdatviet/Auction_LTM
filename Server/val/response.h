#ifndef RES_H
#define RES_H


enum StatusCode {
    CONNECTED,          // connected

    LOGINOK,            // login success
    UNAMENF,            // username not found
    WRONG_PASSWORD,     // password wrong
    ALREADYLOGIN,       // already login
    ACCLOGIN,           // This account already login in other client
    ACCEXIST,           // Account is exist

    SIGNUPSUCCESS,      // signup success
    SIGNUPFAIL,         // signup fail

    JOINNOK,            // Join success
    NOTLOGIN,           // Not logged in
    ROOMNE,             // Room not exist
    ROOMF,              // Room is full
    ALREADYINROOM,      // Already in other room

    OUTOK,              // Out success
    NOTINROOM,          // Not in room

    LOGOUTOK,           // Logout success

    GETROOML,           // get room list success server bắt đầu gửi dữ liệu list các phòng

    ROOMCROK,           // create room success
    ALREADYEXISTR,      // room already exist
    ROOMLFULL,          // room list is full

    ADDITEMOK,          // add success
    ALREADYEXISTITEM,   // Already exist items

    RETRIEVEOK,         // retrieve success
    ALREADYAUCITEM,     // Item Already Auctioned
    ITEMNE,             // Nonexistent Item
    ITEMNO,             // Not own this item

    BIDOK,              // Successful Bid
    NOTHIGHER,          // Bid Higher Than Current
    NOITEM,             // No item to auction

    BUYOK,              // Successful Buy

    SYNTAXERR,          // Syntax error
    SOLDED,             // Item sold
    NEWBID,             // Best price is 
    COUNTDOWN,          // Countdown phase
    NEWITEMARRIVED      // New item arrived
};


#endif