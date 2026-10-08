// from server: 91% by colin
// roc 2007-08 0067eef0  unit: CXTPControlLabel  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067eef0
//
// 0067eef0  56                   push esi
// 0067eef1  57                   push edi
// 0067eef2  8bf9                 mov edi, ecx
// 0067eef4  e877ffffff           call 0x67ee70
// 0067eef9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067eefd  8bf0                 mov esi, eax
// 0067eeff  8b06                 mov eax, dword ptr [esi]
// 0067ef01  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0067ef07  51                   push ecx
// 0067ef08  57                   push edi
// 0067ef09  8bce                 mov ecx, esi
// 0067ef0b  ffd2                 call edx
// 0067ef0d  5f                   pop edi
// 0067ef0e  8bc6                 mov eax, esi
// 0067ef10  5e                   pop esi
// 0067ef11  c20400               ret 4

struct CXTPControlLabel {
    void* sub_67EE70();
    void sub_67EF20(int);
    void* sub_67EEF0(int);
};

void* CXTPControlLabel::sub_67EEF0(int arg) {
    void* p = sub_67EE70();
    void** vtbl = *(void***)p;
    void (*fn)(void*, void*, int) = (void (*)(void*, void*, int))vtbl[0x38];
    fn(p, this, arg);
    return p;
}
