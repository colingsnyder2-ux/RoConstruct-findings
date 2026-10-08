// from server: 43% by colin
// roc 2007-08 00445090  unit: P8CRenderSettings::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445090
//
// 00445090  8b442404             mov eax, dword ptr [esp + 4]
// 00445094  85c0                 test eax, eax
// 00445096  8bd1                 mov edx, ecx
// 00445098  7418                 je 0x4450b2
// 0044509a  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0044509d  83c0fc               add eax, -4
// 004450a0  03c8                 add ecx, eax
// 004450a2  8b4208               mov eax, dword ptr [edx + 8]
// 004450a5  ffd0                 call eax
// 004450a7  89442404             mov dword ptr [esp + 4], eax
// 004450ab  db442404             fild dword ptr [esp + 4]
// 004450af  c20400               ret 4
// 004450b2  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 004450b5  33c0                 xor eax, eax
// 004450b7  03c8                 add ecx, eax
// 004450b9  8b4208               mov eax, dword ptr [edx + 8]
// 004450bc  ffd0                 call eax
// 004450be  89442404             mov dword ptr [esp + 4], eax
// 004450c2  db442404             fild dword ptr [esp + 4]
// 004450c6  c20400               ret 4

struct CRenderSettings {
    char pad[8];
    int (__stdcall *getter)(int);
    int offset;
    double GetSetImpl(int arg);
};

double CRenderSettings::GetSetImpl(int arg) {
    int value;
    if (arg != 0) {
        value = getter(offset + (arg - 4));
    } else {
        value = getter(offset);
    }
    return (double)value;
}
