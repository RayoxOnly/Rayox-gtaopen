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
    Admin_AddCommandToList(1, "/freeze - membekukan/melepas kontrol pemain");
    Admin_AddCommandToList(1, "/akill - membunuh pemain dengan ledakan");
    Admin_AddCommandToList(1, "/afix - memperbaiki kendaraan yang sedang ditumpangi");
    Admin_AddCommandToList(1, "/get - tarik pemain ke posisimu");
    Admin_AddCommandToList(1, "/kick - keluarkan pemain dari server");
    Admin_AddCommandToList(1, "/goto - teleport ke pemain");
    Admin_AddCommandToList(1, "/setwanted - atur wanted level pemain");
    Admin_AddCommandToList(1, "/respawn - paksa respawn pemain");
    Admin_AddCommandToList(1, "/spec - spectate pemain");
    Admin_AddCommandToList(1, "/specoff - berhenti spectate dan kembali");
    Admin_AddCommandToList(1, "/bulletstats - lihat statistik tembakan dan akurasi pemain");

    // Level 2
    Admin_AddCommandToList(2, "/jail - penjarakan pemain (detik, alasan)");
    Admin_AddCommandToList(2, "/unjail - bebaskan pemain dari penjara");
    Admin_AddCommandToList(2, "/tempban - ban sementara (hari/bulan/tahun)");
    Admin_AddCommandToList(2, "/offban - ban offline berdasarkan nama (hari/bulan/tahun)");

    // Level 3
    Admin_AddCommandToList(3, "/getallciv - teleport semua civilian ke posisimu");
    Admin_AddCommandToList(3, "/unban - hapus ban akun");
    Admin_AddCommandToList(3, "/disarm - hapus semua senjata pemain");
    Admin_AddCommandToList(3, "/sethealth - set HP pemain");
    Admin_AddCommandToList(3, "/setarmour - set armour pemain");
    Admin_AddCommandToList(3, "/giveweaps - beri paket senjata");
    Admin_AddCommandToList(3, "/veh - spawn kendaraan");
    Admin_AddCommandToList(3, "/aveh - spawn kendaraan admin");
    Admin_AddCommandToList(3, "/dav - hapus semua kendaraan admin");
    Admin_AddCommandToList(3, "/rscars - reset semua kendaraan");
    Admin_AddCommandToList(3, "/setname - ganti nama pemain");
    Admin_AddCommandToList(3, "/setarmy - tambahkan pemain ke Army");
    Admin_AddCommandToList(3, "/revokearmy - cabut akses Army dari pemain");

    // Level 4
    Admin_AddCommandToList(4, "/setvip - set level VIP (bulanan/permanen)");
    Admin_AddCommandToList(4, "/givemoney - beri uang ke pemain");
    Admin_AddCommandToList(4, "/fine - denda uang pemain");
    Admin_AddCommandToList(4, "/hcreate - buat rumah");
    Admin_AddCommandToList(4, "/hdelete - hapus rumah");
    Admin_AddCommandToList(4, "/getmoney - lihat jumlah uang pemain");
    Admin_AddCommandToList(4, "/motd - ubah pesan MOTD");

    // Level 5
    Admin_AddCommandToList(5, "/setadmin - set level admin pemain");
    Admin_AddCommandToList(5, "/skick - kick diam-diam (tanpa broadcast)");
    Admin_AddCommandToList(5, "/deleteacc - hapus akun dari database");
    Admin_AddCommandToList(5, "/createatm - buat ATM");
    Admin_AddCommandToList(5, "/deleteatm - hapus ATM");
    Admin_AddCommandToList(5, "/editatm - edit ATM");
    Admin_AddCommandToList(5, "/fly - mode terbang");
    Admin_AddCommandToList(5, "/createentrance - buat entrance dan exit");
}
