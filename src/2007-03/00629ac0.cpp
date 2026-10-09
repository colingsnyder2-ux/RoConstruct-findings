// roc 2007-03 00629ac0  unit: seg_00620000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00629ac0
//
// 00629ac0  8b442404             mov eax, dword ptr [esp + 4]
// 00629ac4  83f801               cmp eax, 1
// 00629ac7  7509                 jne 0x629ad2
// 00629ac9  89442404             mov dword ptr [esp + 4], eax
// 00629acd  e9aefbffff           jmp 0x629680
// 00629ad2  83f802               cmp eax, 2
// 00629ad5  7508                 jne 0x629adf
// 00629ad7  e8b4b5ffff           call 0x625090
// 00629adc  c20400               ret 4
// 00629adf  83f803               cmp eax, 3
// 00629ae2  7508                 jne 0x629aec
// 00629ae4  e8c7b5ffff           call 0x6250b0
// 00629ae9  c20400               ret 4
// 00629aec  83f804               cmp eax, 4
// 00629aef  7508                 jne 0x629af9
// 00629af1  e8dab5ffff           call 0x6250d0
// 00629af6  c20400               ret 4
// 00629af9  e882b5ffff           call 0x625080
// 00629afe  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPImageManagerIconSet@ns_ROCX000036@@QAEXH@Z)

namespace ns_ROCX000036 {
struct CXTPImageManagerIconSet {
    void sub_64C960(int);
    void sub_648740();
    void sub_648760();
    void sub_648780();
    void sub_648730();
    void func(int);
};

void CXTPImageManagerIconSet::func(int n) {
    if (n == 1) {
        sub_64C960(n);
        return;
    }
    if (n == 2) {
        sub_648740();
        return;
    }
    if (n == 3) {
        sub_648760();
        return;
    }
    if (n == 4) {
        sub_648780();
        return;
    }
    sub_648730();
}
}
