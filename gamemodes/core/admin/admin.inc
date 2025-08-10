#include <YSI_Coding\y_hooks>

#include <admin_account>
#include <admin_ban>

#include <admin_cmd_lvl1>
#include <admin_cmd_lvl2>

#include <admin_cmd_lvl3carscmds>
#include <admin_cmd_lvl3>
#include <admin_cmd_lvl4>
#include <admin_remove-account>
#include <admin_cmd_lvl5>

#include <admin_acmds>

#include <admin_cmd-entrance>
#include <admin_cmd-atm>
#include <rcon_cmd>
#include <fly_cmd>
#include <admin_player-accuracy>
#include <admin_spec-cmd>

hook OnGameModeInit() {
    // Level 1
    Admin_AddCommandToList(1, "/freeze - freeze/unfreeze a player's controls");
    Admin_AddCommandToList(1, "/akill - kill a player with an explosion");
    Admin_AddCommandToList(1, "/afix - repair the vehicle you're currently in");
    Admin_AddCommandToList(1, "/get - pull a player to your position");
    Admin_AddCommandToList(1, "/kick - remove a player from the server");
    Admin_AddCommandToList(1, "/goto - teleport to a player");
    Admin_AddCommandToList(1, "/setwanted - set a player's wanted level");
    Admin_AddCommandToList(1, "/respawn - force a player to respawn");
    Admin_AddCommandToList(1, "/spec - spectate a player");
    Admin_AddCommandToList(1, "/specoff - stop spectating and return");
    Admin_AddCommandToList(1, "/bulletstats - view a player's shot and accuracy stats");

    // Level 2
    Admin_AddCommandToList(2, "/jail - jail a player (seconds, reason)");
    Admin_AddCommandToList(2, "/unjail - release a player from jail");
    Admin_AddCommandToList(2, "/tempban - temporary ban (days/months/years)");
    Admin_AddCommandToList(2, "/offban - offline ban by name (days/months/years)");

    // Level 3
    Admin_AddCommandToList(3, "/getallciv - teleport all civilians to your position");
    Admin_AddCommandToList(3, "/unban - remove an account ban");
    Admin_AddCommandToList(3, "/disarm - remove all weapons from a player");
    Admin_AddCommandToList(3, "/sethealth - set a player's health");
    Admin_AddCommandToList(3, "/setarmour - set a player's armour");
    Admin_AddCommandToList(3, "/giveweaps - give a weapon package");
    Admin_AddCommandToList(3, "/veh - spawn a vehicle");
    Admin_AddCommandToList(3, "/aveh - spawn an admin vehicle");
    Admin_AddCommandToList(3, "/dav - delete all admin vehicles");
    Admin_AddCommandToList(3, "/rscars - reset all vehicles");
    Admin_AddCommandToList(3, "/setname - change a player's name");
    Admin_AddCommandToList(3, "/setarmy - add a player to the Army");
    Admin_AddCommandToList(3, "/revokearmy - revoke a player's Army access");

    // Level 4
    Admin_AddCommandToList(4, "/setvip - set VIP level (monthly/permanent)");
    Admin_AddCommandToList(4, "/givemoney - give money to a player");
    Admin_AddCommandToList(4, "/fine - fine a player (deduct money)");
    Admin_AddCommandToList(4, "/hcreate - create a house");
    Admin_AddCommandToList(4, "/hdelete - delete a house");
    Admin_AddCommandToList(4, "/getmoney - view a player's money");
    Admin_AddCommandToList(4, "/motd - change the MOTD message");

    // Level 5
    Admin_AddCommandToList(5, "/setadmin - set a player's admin level");
    Admin_AddCommandToList(5, "/skick - silently kick (no broadcast)");
    Admin_AddCommandToList(5, "/deleteacc - delete an account from the database");
    Admin_AddCommandToList(5, "/createatm - create an ATM");
    Admin_AddCommandToList(5, "/deleteatm - delete an ATM");
    Admin_AddCommandToList(5, "/editatm - edit an ATM");
    Admin_AddCommandToList(5, "/fly - fly mode");
    Admin_AddCommandToList(5, "/createentrance - create an entrance and exit");
}
