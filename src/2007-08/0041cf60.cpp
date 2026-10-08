// from server: 70% by colin
// roc 2007-08 0041cf60  unit: InsertDecal  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041cf60
//
// 0041cf60  8bc1                 mov eax, ecx
// 0041cf62  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041cf66  85c9                 test ecx, ecx
// 0041cf68  740f                 je 0x41cf79
// 0041cf6a  50                   push eax
// 0041cf6b  e8a0ffffff           call 0x41cf10
// 0041cf70  84c0                 test al, al
// 0041cf72  7505                 jne 0x41cf79
// 0041cf74  33c0                 xor eax, eax
// 0041cf76  c20400               ret 4
// 0041cf79  b801000000           mov eax, 1
// 0041cf7e  c20400               ret 4

struct InsertDecal {
    int f(int);
};

int InsertDecal::f(int a) {
    if (a != 0) {
        if (!((InsertDecal*)this)->f(a)) {
            return 0;
        }
    }
    return 1;
}
