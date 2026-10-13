// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 roc_unit_45931f30d1eceea5.cpp
// Evidence: target JPEG branch tests the SOI marker (data[0]==0xFF,
// data[1]==0xD8, data[2]==0xFF) while the archive g3d-6.09 GImage.cpp tests
// memcmp(&data[6], "JFIF", 4). Generated unit is the same file with that one
// byte-proven edit; scratch score 100%.
