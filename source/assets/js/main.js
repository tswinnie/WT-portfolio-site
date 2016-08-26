/**
 * Created by tyroneswinnie on 8/15/16.
 */


(function ($) {

    //function for initializing Typed.js library
    $.fn.runType = function () {


        $(this).typed({
            strings: ["UI Design", "User Experience Design", "Web Development", "Software Development", "Logo Design", "Brand Design"],
            startDelay: 1500, //delay start
            typeSpeed: 150,
            backDelay: 1500,
            loop: true,
            loopCount: false

        });


    };


    $.fn.displayWorkDetails = function () {

        var _this = '.work-details';

        $(_this).mouseenter(function () {
            $('.work-card-block').removeClass('reset-work-details');

            $(this).find('.work-card-block').addClass('show-work-details');

        });

        $(_this).mouseleave(function () {

            $(this).find('.work-card-block').removeClass('show-work-details');

        });





    };

    $.fn.callModal = function () {


        $('#myModal').on('shown.bs.modal', function () {});
        //add reset class on close of modal
        $('.close').click(function() {

            $('.work-card-block').addClass('reset-work-details');

        });
        
        
        $('.work-details').click(function () {
            //find the id for the modal that needs to be opened
            var modalID = $(this).find('button').attr("data-target");

            //now pass modalID modal method to open the appropriate modal
            $(modalID).modal('show')

        });

    };

    $.fn.animateCards = function(){

        var arry = [];
        var randomCard;
        var firstCard = '.card-first';


        $(this).each(function(index, element) {

            //add items to an array
            arry.push(element);
            //console.log(index);
        });
        for(var i = 0; i < arry.length; i++) {

            //$(firstCard).addClass ('animated zoomOut');
            //get a random card to add animation to first
            // randomCard = arry[Math.floor(Math.random()*arry.length )];
            // $(randomCard).addClass ('animated zoomOut');


            //add animation to remaining cards
            $ (this).delay (450 * arry[i]).animate ({opacity: 1}, 450, function () {
                $ (this).addClass ('animated zoomOut');
            });
        }


    };



    $.fn.animateCardsShow = function(){


        $(this).each(function(index, element) {

            $(element).addClass ('animated zoomIn');

        });



    };




})(jQuery);



