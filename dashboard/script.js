document.addEventListener("DOMContentLoaded", function () {

    console.log("Rescue-Mesh Dashboard Started");

    const alertBox = document.querySelector(".alert");

    if (alertBox) {
        alertBox.addEventListener("click", function () {
            alert("🚨 Emergency survivor alert acknowledged!");
        });
    }

});
