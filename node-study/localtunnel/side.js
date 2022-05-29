const animation1 = bodymovin.loadAnimation({
        container: $('lottie_1')[0],
        path: './lottie/heart-event.json',
        renderer: 'svg',
        loop:true.
        autoplay: true
        
});

$(function(){
        $('.btn_1').on('clink', function(){
                if(&(this).hasClass('on')){
                        $(this).removeClass('on');
                        animation1.goToAndStop(39,true)//Specify stop frame
                        //amimation1.stop() //stop
                        //
                }else{
                        $(this).addClass('on');
                        animation1.play();
                }
        });
});

