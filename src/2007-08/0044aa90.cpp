// from server: 70% by colin
// roc 2007-08 0044aa90  unit: CRobloxApp  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044aa90
//
// 0044aa90  8b442408             mov eax, dword ptr [esp + 8]
// 0044aa94  83f802               cmp eax, 2
// 0044aa97  7519                 jne 0x44aab2
// 0044aa99  56                   push esi
// 0044aa9a  8b742408             mov esi, dword ptr [esp + 8]
// 0044aa9e  56                   push esi
// 0044aa9f  b9f0918800           mov ecx, 0x8891f0
// 0044aaa4  ff1508e77700         call dword ptr [0x77e708]
// 0044aaaa  f6d8                 neg al
// 0044aaac  1bc0                 sbb eax, eax
// 0044aaae  23c6                 and eax, esi
// 0044aab0  5e                   pop esi
// 0044aab1  c3                   ret 
// 0044aab2  8b542404             mov edx, dword ptr [esp + 4]
// 0044aab6  c644240800           mov byte ptr [esp + 8], 0
// 0044aabb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044aabf  51                   push ecx
// 0044aac0  50                   push eax
// 0044aac1  52                   push edx
// 0044aac2  e889e71a00           call 0x5f9250
// 0044aac7  83c40c               add esp, 0xc
// 0044aaca  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct CRobloxApp {
    int f(int, int);
};

extern "C" int __cdecl sub_5F9250(int, int, char);

int CRobloxApp::f(int a, int b) {
    if (b == 2) {
        int r = (*(const type_info*)0x8891f0 == *(const type_info*)a) ? a : 0;
        return r;
    }
    char local = 0;
    return sub_5F9250(a, b, local);
}
