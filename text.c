// sass : Syntactically Awesome Stylesheet.
// is a powerful CSS preprocessor (generate css style) scripting language that helps you to
// work on your style sheet much faster than ever.
// Sass allows you to use features such as variables, function
// used to make dark modes
// static to dynamic language
// used to creat css library
// css prefix (-webkit-,-moz-) is are a way for browser makers to add support for new CSS features before those 
    //features are fully supported in all browsers
// when work in a bage project if creat your own css inside the current project you well have allot of trouble the classes you added  can be lready exeste ;
// mai.css is the production version
// main.scss is the development version
// deferent between @import and @use is
    //@use should add (as *,namspace.$varibal) to acces namspace variba
    //@import use varibales diractly 
// nesting & parent elements
    // ">" : it used to speciale diricte children
    // "&" : refered to parent element 
    // class1:hover class2 { color: red} >> will change element with class2 to color red when class1 is hovered 
    // :not(.class1) { color: red} >> will change element color unless except .class1
// property declations & placeholder
    //  margin: auto {
    //     top: 89px;
    //     bottom: 10px;
    // }
    // border: solid black 2px {
    //     top: 12px;
    //     buttom:22px dashed red;
    // }
    // placeholder
        //%inherent{
        //     border: 2px;
        //     max-width: 12px;
        // }
        // div {
        //    @extend %inherent
        //          }
// control flow if and else // dark mode ; language
    //     $thempage : 'black';
    // .page{
    //     @if $thempage == 'light'{
    //         background-color: #fff;
    //         color: black;
    //     }@else{
    //         background-color: black;
    //         color: #fff;
    //     }
    // }
    //.block{
    // color: if($thempage,lightblue,black);
    // }
// interpolation 
    //     $company: "companyname";
    // $property : "color";
    // $value : violet;

    // .div-#{$company}-#{unique-id()}{
    //     margin: 5px;
    //     margin-left: 50px;
    //     #{$property}: #{$value};
    // }
// mixin and includes
    //     @mixin function($var1,$var2){
    //     margin: $var1;
    //     border: 30px black #{$var2};
    //      }
    // .div{
    //     @include function(20px,"black");
    //     background-color: #fff;
    //     }

// loop for
    // to 10 without 10 ; through 10 including 10
    // @for $i from 1 through 2{
    //     .class-#{$i}{
    //         font-size: 10px + $i;
    //     }
    //     .class-#{$i+1}{
    //         color: var(--main_color);
    //         background-color:$violet;
    //     }
    // }
