<?php
$tanggal_awal = date_create("2018-10-05");
$tanggal_akhir = date_create("2018-11-01");
$selisih_date = date_diff($tanggal_awal, $tanggal_akhir);
$selisih_n = $selisih_date->format("%R%a");
echo "Selisih nya adalah " . abs($selisih_n) . " hari.";
?>