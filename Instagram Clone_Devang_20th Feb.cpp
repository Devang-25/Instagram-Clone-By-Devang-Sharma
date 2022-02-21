Date : 20th February 2022
Mentor: DEVANG SHARMA
Batch: NEWTON SCHOOL
Agenda : Instagram  - Product Overview, Clone, and Hosting

"INSTRAGRAM CLONE USING REACT AND FIREBASE"

-> Introduction - DONE
-> Scope and Definition- DONE
-> Instagram as a Product - DONE
-> Live Demo of Clone- Web Version
-> Requirement clarification 
 	- Functional
 	- Non Functional
 	- Out of Scope

-> Intro to React Js
-> Environment Setup- VS Code
-> Github Account 
-> Create Repo: Instagram clone by __:
-> BEM Model in CSS (Block, Element, Modifier)
-> Heroku Account: 
-> Firebase Account:

"Please Type 'Hi' in the Chat Box if you have joined and Can See this Screen".
"We Will Start immediately After Every one has joined the session"


Web Site:

Front-End:
Client Side:

- What you See/Experience as a User ?
(UI and UX)
UI: User interface
UX: User Experience



Back-End:
- Server Side:

- Data and Logic

Logic: Code to Have EDA (Event Driven Architecture)
Eg: Click on Buy Now -> Payment Page

Data: Database

What? -> Collection of All Information
Why? -> To Query Over It and Fetch the Details



E-Commerce:

Search Bar -> "Black Jacket"

Results:

Jacket-1
Jacket-2
Jacket-3

All Items Stored: DB
Fetch "Jacket" -> Query the DB



FLOW:

Client (Browser/Mobile/Tab)  -- REQUEST ----> Server

Eg: Show me black jackets on Flipkart

Client (Browser/Mobile/Tab)  <-- RESPONSE <---- Server

Eg: Here are the results of your search


Client (Browser/Mobile/Tab)  <-- RESPONSE via API <---- Server

Eg: Here are the results of your search



Practical Example:
Client -Server Architecture

Dine in a Restaurant ?

"I want a Cheese Margharita Pizza"

Client: Making Request: Me

Server: Give Response: Kitchen
- Logic: Add Cheese + margharita to the topping
- DB: Ingredients + Crust + ....

API: Get Results from Server and Give it to Client: Waiter 

UI: Size of Pizza, Looks, ...
UX: Taste of Pizza, How Crusty it is....


-> Web Applications:

Front End:
- Languages: HTML, CSS, JS, Typescript
- Frameworks: React, Angular, Vue

BackEnd:
- Languages: Java, Node.js, Python, C++, C# etc
- Framework: Django, Spring Boot etc

Mobile Application:
- Android (Google): Java, Kotlin 
- iOS (Apple): Swift

New things: Flutter, React Native : BOTH for Android and iOS


-> Instagram Clone:
- Front End: React js 
- Back End: Firebase



-> Instagram as a Product

(1) Header: (Logo, 6 Icons, Color: White, Search Bar)
(2) Body:
- post: (Image, Video, etc)
- like
- comment (recursive)
- share

(3) Static Part:
- Footer: (Links)

(4) Recommendation Systems:
- Suggestions 
- Popular Posts


--> Live Demo of Clone:

(1) Header: Logo, Color: White - Front End (HTML + CSS)

(2) Body: (Firebase)
- User Image
- Content: Post/Video
- recursive Comments
- Likes

(3) DB performance: (Firebase)
- Sign Up
- Login





Database:
(1) Posting Content (Images,Videos etc)
- Every Content- Metadata:
(Likes, Comments, Save, Location etc )

API: 
post_content(content, metadata)

--> User Uploads --> S3 Bucket --> Generates Link
content: Link to S3 Bucket

metadata: Data About Data
caption, likes, Views, Comments, Location, Tagged Location etc

(2) User Profile:

- User Details
- Name
- Bio
- Profile Picture
- Followers
- Following
- Posts
- Highlights
- Saved

(3) Messages/Chat History:

1:1 Chat
1:N Chat


Persisted chats/messages: Instagram
- Deleting Messages: No Notification to Other User

- Deleting Messages: Notification Send to Other User

A: "Hi" -> B

A --> Server ---> B


- A send "Hi" to Server
- Server responds with Ack
- Server will send to B
- B will receive and ack (BLUE TICK/Seen) 
- Server will notify A



No persisted: Snapchat

(4) Authentication: 
- Sign Up (Create New Username and PW)
- Login (Match Username with PW)


Client ---> Username + PW ----> jkhghdjsg27863787897912 --> Server

{
	username: devang@gmail.com
	PW: devang
}

devang ---> jkhghdjsg27863787897912: ENCRYPTION


If Correct, Login
Else, Incorrect Password


BackEnd: FIREBASE:

- Firebase: Set of Tools/Suite of Tools
- Firebase: Database
- Firebase: Authentication
- Firebase: Storage
- Firebase: Hosting
- Firebase: Messaging
- Firebase: Realtime Database










-> First React App

- Install Node and Npm (Node Package Manager) in your System - DONE
(https://nodejs.org/en/download/)
Check With: node -v and npm -v

- Diff between npm create and npx create
(npm install -g create-react-app)
(npx create-react-app instagram-clone-by-____)

-> Accounts Required : Github, Instagram, Firebase and Heroku- 

Redirect URI- http://localhost:3000/ - DONE

-> Coding, Coding and Coding: MOST Imp and Fun: 1 Hr 15 Mins- DONE

-> Push to Github: 5 Mins- DONE

-> Hosting on Heroku (Deployment on Prod): 10 Mins- DONE

-> npm install and npm start commands (Local and Prod Builds)- DONE


LIVE DEMO of Clone We Will Build:









-> Instagram Logo:
https://www.instagram.com/static/images/web/mobile_nav_type_logo.png/735145cfe0a4.png

-> ColorZilla Chrome Extension

-> Es7 VS Code Extension
(Type rfce and Enter)

-> object-fit: contain

(PRO Tip to Make Responsive Web Pages)

LIVE DEMO of Clone We Will Build:

CODING: 


- Create Login Page


Flipkart -> Pay -> Paytm -> Payment -> Flipkart


Github Push
- DO NOT PUSH Node-Modules

Two Methods: 
(1) Github Desktop 


(2) Git Command

git status
git add . (Don't Use Node Modules)
git commit -m "Added Instagram Clone"
git push



Host on Heroku
(1) Create Profile On Heroku
(2) Create Repo
(3) Create Heroku App
(4) Select Region - US ot Europe
(5) Select Github Repo
(6) Deploy on Heroku


Ending:

(1) Post About in Linkedin
(2) Github Link and recording
(3) Certificate
(4) Newton School

