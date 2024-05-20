const bar = document.getElementById('bar');
const nav = document.getElementById('navbar');
const clos = document.getElementById('clos');


if(bar){
    bar.addEventListener('click', () =>{
        nav.classList.add('active');
    })
}
if(clos){
    clos.addEventListener('click', () =>{
        nav.classList.remove('active');
    })
}

/*sproduct script*/
