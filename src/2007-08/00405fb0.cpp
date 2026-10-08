// from server: 64% by colin
// roc 2007-08 00405fb0  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00405fb0
//
// 00405fb0  56                   push esi
// 00405fb1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00405fb5  85f6                 test esi, esi
// 00405fb7  7509                 jne 0x405fc2
// 00405fb9  b857000780           mov eax, 0x80070057
// 00405fbe  5e                   pop esi
// 00405fbf  c20800               ret 8
// 00405fc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00405fc6  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00405fc9  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00405fcc  2bc2                 sub eax, edx
// 00405fce  c1f803               sar eax, 3
// 00405fd1  3bf0                 cmp esi, eax
// 00405fd3  7702                 ja 0x405fd7
// 00405fd5  8bc6                 mov eax, esi
// 00405fd7  8d14c2               lea edx, [edx + eax*8]
// 00405fda  895110               mov dword ptr [ecx + 0x10], edx
// 00405fdd  33c9                 xor ecx, ecx
// 00405fdf  3bf0                 cmp esi, eax
// 00405fe1  0f95c1               setne cl
// 00405fe4  5e                   pop esi
// 00405fe5  8bc1                 mov eax, ecx
// 00405fe7  c20800               ret 8

struct UIEnumConnections {
    char pad[0xc];
    int* begin;
    int* end;
    int Set(int count);
};

int UIEnumConnections::Set(int count) {
    if (count == 0) {
        return 0x80070057;
    }
    int* p = this->end;
    int avail = (int)((char*)this->begin - (char*)p) >> 3;
    int n = count;
    if ((unsigned)count > (unsigned)avail) {
        n = avail;
    }
    this->end = p + n * 2;
    return (count != n) ? 1 : 0;
}
