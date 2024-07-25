/**
 * wm_strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_


#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

// strings files must include a consts file!
#include "wm_consts_en.h" // include constants, tokens, routes

const char WM_LANGUAGE[] PROGMEM = "en-US"; // i18n lang code

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='en'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>{v}</title>";

// const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
// "document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
// "p = l.nextElementSibling.classList.contains('l');"
// "document.getElementById('p').disabled = !p;"
// "if(p)document.getElementById('p').focus();};"
// "function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
// "</script>"; // @todo add button states, disable on click , show ack , spinner etc
const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"var div = element.querySelector('.strength > div[role=\"img\"]');"
"p = div && div.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();};"
"function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
"</script>"; // @todo add button states, disable on click , show ack , spinner etc

// const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'>"
"<header><div class='logo'><img width='200' height='67' src='data:image/png;base64,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' /></div></header>"
"<div class='wrap'>"
; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAADQElEQVRoQ+2YjW0VQQyE7Q6gAkgFkAogFUAqgFQAVACpAKiAUAFQAaECQgWECggVGH1PPrRvn3dv9/YkFOksoUhhfzwz9ngvKrc89JbnLxuA/63gpsCmwCADWwkNEji8fVNgotDM7osI/x777x5l9F6JyB8R4eeVql4P0y8yNsjM7KGIPBORp558T04A+CwiH1UVUItiUQmZ2XMReSEiAFgjAPBeVS96D+sCYGaUx4cFbLfmhSpnqnrZuqEJgJnd8cQplVLciAgX//Cf0ToIeOB9wpmloLQAwpnVmAXgdf6pwjpJIz+XNoeZQQZlODV9vhc1Tuf6owrAk/8qIhFbJH7eI3eEzsvydQEICqBEkZwiALfF70HyHPpqScPV5HFjeFu476SkRA0AzOfy4hYwstj2ZkDgaphE7m6XqnoS7Q0BOPs/sw0kDROzjdXcCMFCNwzIy0EcRcOvBACfh4k0wgOmBX4xjfmk4DKTS31hgNWIKBCI8gdzogTgjYjQWFMw+o9LzJoZ63GUmjWm2wGDc7EvDDOj/1IVMIyD9SUAL0WEhpriRlXv5je5S+U1i2N88zdPuoVkeB+ls4SyxCoP3kVm9jsjpEsBLoOBNC5U9SwpGdakFkviuFP1keblATkTENTYcxkzgxTKOI3jyDxqLkQT87pMA++H3XvJBYtsNbBN6vuXq5S737WqHkW1VgMQNXJ0RshMqbbT33sJ5kpHWymzcJjNTeJIymJZtSQd9NHQHS1vodoFoTMkfbJzpRnLzB2vi6BZAJxWaCr+62BC+jzAxVJb3dmmiLzLwZhZNPE5e880Suo2AZgB8e8idxherqUPnT3brBDTlPxO3Z66rVwIwySXugdNd+5ejhqp/+NmgIwGX3Py3QBmlEi54KlwmjkOytQ+iJrLJj23S4GkOeecg8G091no737qvRRdzE+HLALQoMTBbJgBsCj5RSWUlUVJiZ4SOljb05eLFWgoJ5oY6yTyJp62D39jDANoKKcSocPJD5dQYzlFAFZJflUArgTPZKZwLXAnHmerfJquUkKZEgyzqOb5TuDt1P3nwxobqwPocZA11m4A1mBx5IxNgRH21ti7KbAGiyNn3HoF/gJ0w05A8xclpwAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>WiFiManager</h3>";
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{t}</h1><h3>{v}</h3>";
const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{t}</h1>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configure WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configure WiFi (No scan)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Info</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Setup</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Close</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Restart</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Exit</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Erase</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>Update</button></form><br/>\n",// MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
// const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM_QP[]          PROGMEM = "<span class='{h}'>({r}%)</span>"; // rssi percentage {h} = hidden showperc pref
// const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)' data-ssid='{V}'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
const char HTTP_ITEM[]             PROGMEM = "<a class='wifi-ssid' href='#p' onclick='c(this)' data-ssid='{V}'><span>{v}</span><div class='strength'>{qi}{qp}</div></a>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP

// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
// const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'><input type='checkbox' id='showpass' onclick='f()'> <label for='showpass'>Show Password</label><br/>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<div class='input'><label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'></div><div class='input'><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'></div> <div><input type='checkbox' id='showpass' onclick='f()'><label for='showpass'>Show Password</label></div>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
// const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_END[]         PROGMEM = "<div><button class='button' type='submit'>Save</button></div></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // do not remove newline!

// const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refresh</button></form>";
const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refresh the list of networks</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Saving Credentials<br/>Trying to connect ESP to network.<br />If it fails reconnect to AP to try again</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Saved<br/></div>";
// const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_END[]              PROGMEM = "</div></body>"
"<script>"
"function wrapElements(elements, wrapper) {"
"if (elements.length === 0) return;"
"elements[0].parentNode.insertBefore(wrapper, elements[0]);"
"for (const element of elements) {"
"wrapper.appendChild(element);"
"}"
"}"
"var elementsToWrap = document.getElementsByClassName('wifi-ssid');"
"if(elementsToWrap.length > 0) {"
"var wrapperDiv = document.createElement('div');"
"wrapperDiv.classList.add('wifi-list');"
"var heading = document.createElement('h1');"
"heading.innerHTML = 'Select your WiFi network';"
"document.getElementsByClassName('wrap')[0].prepend(heading);"
"wrapElements(elementsToWrap, wrapperDiv);"
"}"
"var forms = document.getElementsByTagName('form');"
"for(var form of forms) {"
"if(form.children.length === 1) {"
"form.classList.add('form-as-button');"
"}"
"}"
"</script>"
"</html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi config</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Update</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Back</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Connected</strong> to {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Not connected</strong> to {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Authentication failure"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>AP not found";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Could not connect"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = ""; //"<div class='msg'>No AP set</div>"; // @custom
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
"*,:after,:before{box-sizing:border-box;border:0 solid #e5e7eb}:after,:before{--tw-content:''}:host,html{line-height:1.5;-webkit-text-size-adjust:100%;-moz-tab-size:4;-o-tab-size:4;tab-size:4;font-family:ui-sans-serif,system-ui,sans-serif,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol,Noto Color Emoji;font-feature-settings:normal;font-variation-settings:normal;-webkit-tap-highlight-color:transparent}body{margin:0;line-height:inherit}hr{height:0;color:inherit;border-top-width:1px}abbr:where([title]){-webkit-text-decoration:underline dotted;text-decoration:underline dotted}h1,h2,h3,h4,h5,h6{font-size:inherit;font-weight:inherit}a{color:inherit;text-decoration:inherit}b,strong{font-weight:bolder}code,kbd,pre,samp{font-family:ui-monospace,SFMono-Regular,Menlo,Monaco,Consolas,Liberation Mono,Courier New,monospace;font-feature-settings:normal;font-variation-settings:normal;font-size:1em}small{font-size:80%}sub,sup{font-size:75%;line-height:0;position:relative;vertical-align:initial}sub{bottom:-.25em}sup{top:-.5em}table{text-indent:0;border-color:inherit;border-collapse:collapse}button,input,optgroup,select,textarea{font-family:inherit;font-feature-settings:inherit;font-variation-settings:inherit;font-size:100%;font-weight:inherit;line-height:inherit;color:inherit;margin:0;padding:0}button,select{text-transform:none}[type=button],[type=reset],[type=submit],button{-webkit-appearance:button;background-color:initial;background-image:none}:-moz-focusring{outline:auto}:-moz-ui-invalid{box-shadow:none}progress{vertical-align:initial}::-webkit-inner-spin-button,::-webkit-outer-spin-button{height:auto}[type=search]{-webkit-appearance:textfield;outline-offset:-2px}::-webkit-search-decoration{-webkit-appearance:none}::-webkit-file-upload-button{-webkit-appearance:button;font:inherit}summary{display:list-item}blockquote,dd,dl,figure,h1,h2,h3,h4,h5,h6,hr,p,pre{margin:0}fieldset{margin:0}fieldset,legend{padding:0}menu,ol,ul{list-style:none;margin:0;padding:0}dialog{padding:0}textarea{resize:vertical}input::-moz-placeholder,textarea::-moz-placeholder{opacity:1;color:#9ca3af}input::placeholder,textarea::placeholder{opacity:1;color:#9ca3af}[role=button],button{cursor:pointer}:disabled{cursor:default}audio,canvas,embed,iframe,img,object,svg,video{display:block;vertical-align:middle}img,video{max-width:100%;height:auto}[hidden]{display:none}*,::backdrop,:after,:before{--tw-border-spacing-x:0;--tw-border-spacing-y:0;--tw-translate-x:0;--tw-translate-y:0;--tw-rotate:0;--tw-skew-x:0;--tw-skew-y:0;--tw-scale-x:1;--tw-scale-y:1;--tw-pan-x: ;--tw-pan-y: ;--tw-pinch-zoom: ;--tw-scroll-snap-strictness:proximity;--tw-gradient-from-position: ;--tw-gradient-via-position: ;--tw-gradient-to-position: ;--tw-ordinal: ;--tw-slashed-zero: ;--tw-numeric-figure: ;--tw-numeric-spacing: ;--tw-numeric-fraction: ;--tw-ring-inset: ;--tw-ring-offset-width:0px;--tw-ring-offset-color:#fff;--tw-ring-color:#3b82f680;--tw-ring-offset-shadow:0 0 #0000;--tw-ring-shadow:0 0 #0000;--tw-shadow:0 0 #0000;--tw-shadow-colored:0 0 #0000;--tw-blur: ;--tw-brightness: ;--tw-contrast: ;--tw-grayscale: ;--tw-hue-rotate: ;--tw-invert: ;--tw-saturate: ;--tw-sepia: ;--tw-drop-shadow: ;--tw-backdrop-blur: ;--tw-backdrop-brightness: ;--tw-backdrop-contrast: ;--tw-backdrop-grayscale: ;--tw-backdrop-hue-rotate: ;--tw-backdrop-invert: ;--tw-backdrop-opacity: ;--tw-backdrop-saturate: ;--tw-backdrop-sepia: }body{position:relative;--tw-bg-opacity:1;background-color:rgb(229 231 235/var(--tw-bg-opacity));padding:.5rem 1rem}@media (min-width:395px){body{margin-left:auto;margin-right:auto}}body{width:100%}@media (min-width:395px){body{width:80%}}@media (min-width:640px){body{width:60%}}@media (min-width:1024px){body{width:40%}}body{max-width:56rem}.logo,h1{display:flex;justify-content:center}h1{margin-top:1.5rem;font-size:1.875rem;line-height:2.25rem;align-items:center}@media (min-width:768px){h1{justify-content:flex-start}}h1{-moz-column-gap:.25rem;column-gap:.25rem;--tw-text-opacity:1;color:rgb(31 41 55/var(--tw-text-opacity));justify-content:center!important;margin-bottom:1.75rem}form:not(.form-as-button){--tw-bg-opacity:1;background-color:rgb(255 255 255/var(--tw-bg-opacity));padding:1.25rem;border-radius:.25rem}form:not(.form-as-button)>:not([hidden])~:not([hidden]){--tw-space-y-reverse:0;margin-top:calc(.75rem*(1 - var(--tw-space-y-reverse)));margin-bottom:calc(.75rem*var(--tw-space-y-reverse))}.input{position:relative;z-index:0}.input input{--tw-bg-opacity:1;background-color:rgb(249 250 251/var(--tw-bg-opacity));border-width:1px;--tw-border-opacity:1;border-color:rgb(209 213 219/var(--tw-border-opacity));--tw-text-opacity:1;color:rgb(17 24 39/var(--tw-text-opacity));font-size:.875rem;line-height:1.25rem;border-radius:.5rem}.input input:focus{--tw-ring-opacity:1;--tw-ring-color:rgb(59 130 246/var(--tw-ring-opacity));--tw-border-opacity:1;border-color:rgb(59 130 246/var(--tw-border-opacity))}.input input{display:block;width:100%;padding:.625rem}.input input:disabled{--tw-bg-opacity:1;background-color:rgb(243 244 246/var(--tw-bg-opacity));cursor:not-allowed}.input .hint,.input input:disabled{--tw-text-opacity:1;color:rgb(107 114 128/var(--tw-text-opacity))}.input .hint{font-size:.75rem;line-height:1rem;margin-top:.25rem;margin-bottom:.25rem}.input label{display:block;margin-bottom:.5rem;font-size:.875rem;line-height:1.25rem;font-weight:500;--tw-text-opacity:1;color:rgb(17 24 39/var(--tw-text-opacity))}fieldset{margin-top:1rem!important}fieldset legend{width:100%;border-bottom-width:1px;border-style:dashed;--tw-border-opacity:1;border-color:rgb(209 213 219/var(--tw-border-opacity));font-weight:500;padding-bottom:.25rem;margin-bottom:.5rem;display:flex;align-items:center;-moz-column-gap:.5rem;column-gap:.5rem}.link{--tw-text-opacity:1;color:rgb(37 99 235/var(--tw-text-opacity))}.link:hover{text-decoration-line:underline}.buttons{display:flex;justify-content:space-between;-moz-column-gap:2.5rem;column-gap:2.5rem}.button,.form-as-button{--tw-text-opacity:1;color:rgb(255 255 255/var(--tw-text-opacity));--tw-bg-opacity:1;background-color:rgb(53 126 179/var(--tw-bg-opacity))}.button:hover,.form-as-button:hover{--tw-bg-opacity:1;background-color:rgb(4 135 196/var(--tw-bg-opacity))}.button,.form-as-button{border-width:1px;--tw-border-opacity:1;border-color:rgb(4 135 196/var(--tw-border-opacity))}.button:focus,.form-as-button:focus{--tw-ring-offset-shadow:var(--tw-ring-inset) 0 0 0 var(--tw-ring-offset-width) var(--tw-ring-offset-color);--tw-ring-shadow:var(--tw-ring-inset) 0 0 0 calc(4px + var(--tw-ring-offset-width)) var(--tw-ring-color);box-shadow:var(--tw-ring-offset-shadow),var(--tw-ring-shadow),var(--tw-shadow,0 0 #0000);outline:2px solid #0000;outline-offset:2px;--tw-ring-opacity:1;--tw-ring-color:rgb(147 197 253/var(--tw-ring-opacity))}.button,.form-as-button{font-weight:500;border-radius:.5rem;font-size:.875rem;line-height:1.25rem;width:100%}@media (min-width:640px){.button,.form-as-button{width:auto}}.button,.form-as-button{padding:.625rem 1.25rem;text-align:center}.button-default{--tw-text-opacity:1!important;color:rgb(55 65 81/var(--tw-text-opacity))!important;--tw-bg-opacity:1!important;background-color:rgb(243 244 246/var(--tw-bg-opacity))!important}.button-default:hover{--tw-bg-opacity:1!important;background-color:rgb(229 231 235/var(--tw-bg-opacity))!important}.button-default{--tw-border-opacity:1!important;border-color:rgb(209 213 219/var(--tw-border-opacity))!important}.hide{display:none}.wifi-ssid{display:flex;align-items:center;justify-content:space-between;margin-top:.5rem;margin-bottom:.5rem;--tw-bg-opacity:1;background-color:rgb(255 255 255/var(--tw-bg-opacity));padding:.5rem;border-radius:.25rem}.wifi-ssid:hover{--tw-bg-opacity:1;background-color:rgb(243 244 246/var(--tw-bg-opacity))}.wifi-ssid .strength{display:flex;align-items:center;-moz-column-gap:.5rem;column-gap:.5rem}.wifi-ssid .strength span{font-size:.875rem;line-height:1.25rem;text-align:left;--tw-text-opacity:1;color:rgb(107 114 128/var(--tw-text-opacity))}.wifi-list{margin-top:1.5rem;max-height:20rem;overflow-y:scroll}.h{display:none}.q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;margin-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position:16px 0;background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=')}@media (-webkit-min-device-pixel-ratio:2),(min-resolution:192dpi){.q:after,.q:before{background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');background-size:95px 16px}}"
// ".c,body{text-align:center;font-family:verdana}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
// "input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
// "button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
// "input[type='file']{border:1px solid #1fa3ec}"
// ".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
// // links
// "a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
// // quality icons
// ".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
// "background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// // icons @2x media query (32px rescaled)
// "@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
// "background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
// "background-size: 95px 16px;}}"
// // msg callouts
// ".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// // lists
// "dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
// "td{vertical-align: top;}"
// ".h{display:none}"
// "button{transition: 0s opacity;transition-delay: 3s;transition-duration: 0s;cursor: pointer}"
// "button.D{background-color:#dc3630}"
// "button:active{opacity:50% !important;cursor:wait;transition-delay: 0s}"
// // invert
// "body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
// "body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
// "body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
// ":disabled {opacity: 0.5;}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Available pages</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>Menu page.</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>Parameter page</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>Information page</td></tr>"
 "<tr><td><a href='/u'>/u</a></td>"
 "<td>OTA Update</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>Close the captiveportal popup, config portal will remain active</td></tr>"
 "<tr><td>/exit</td>"
 "<td>Exit Config portal, config portal will close</td></tr>"
 "<tr><td>/restart</td>"
 "<td>Reboot the device</td></tr>"
 "<tr><td>/erase</td>"
 "<td>Erase WiFi configuration and reboot device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
 "</table>"
 "<p/>Github <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Upload new firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Update</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* May not function inside captive portal, open in browser http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Update failed!</strong><Br/>Reboot device and try again</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Update successful.  </strong> <br/> Device rebooting now...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip rev</dt><dd>{1}</dd>";
  	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  	const char HTTP_INFO_aphost[]     PROGMEM = "<dt>Access point hostname</dt><dd>{1}</dd>";
    const char HTTP_INFO_psrsize[]    PROGMEM = "<dt>PSRAM Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd>";
    const char HTTP_INFO_hall[]       PROGMEM = "<dt>Hall</dt><dd>{1}</dd>";
#else
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot version</dt><dd>{1}</dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real flash size</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch size</dt><dd>Used / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free heap</dt><dd>{1} bytes available</dd>";
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} mins {2} secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>Access point SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[]    PROGMEM = "<dt>Station SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[]     PROGMEM = "<dt>WiFiManager</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>Arduino</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[]     PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[]    PROGMEM = "<dt>Build date</dt><dd>{1}</dd>";

const char S_brand[]              PROGMEM = "WiFiManager";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Credentials saved";
const char S_titlewifisettings[]  PROGMEM = "Settings saved";
const char S_titlewifi[]          PROGMEM = "Config ESP";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "options";
const char S_nonetworks[]         PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An error occured";
const char S_notfound[]           PROGMEM = "File not found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";


// softap ssid default prefix
#ifdef ESP8266
    const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
    const char S_ssidpre[]        PROGMEM = "ESP32";
#else
    const char S_ssidpre[]        PROGMEM = "WM";
#endif

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

#endif
