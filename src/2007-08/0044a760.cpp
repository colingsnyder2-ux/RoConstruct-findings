// from server: 66% by colin
// roc 2007-08 0044a760  unit: CRobloxApp  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a760
//
// 0044a760  8b442408             mov eax, dword ptr [esp + 8]
// 0044a764  83f802               cmp eax, 2
// 0044a767  7519                 jne 0x44a782
// 0044a769  56                   push esi
// 0044a76a  8b742408             mov esi, dword ptr [esp + 8]
// 0044a76e  56                   push esi
// 0044a76f  b960918800           mov ecx, 0x889160
// 0044a774  ff1508e77700         call dword ptr [0x77e708]
// 0044a77a  f6d8                 neg al
// 0044a77c  1bc0                 sbb eax, eax
// 0044a77e  23c6                 and eax, esi
// 0044a780  5e                   pop esi
// 0044a781  c3                   ret 
// 0044a782  8b542404             mov edx, dword ptr [esp + 4]
// 0044a786  c644240800           mov byte ptr [esp + 8], 0
// 0044a78b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044a78f  51                   push ecx
// 0044a790  50                   push eax
// 0044a791  52                   push edx
// 0044a792  e8b9eefdff           call 0x429650
// 0044a797  83c40c               add esp, 0xc
// 0044a79a  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct CRobloxApp {
    int f(int, int, int);
};

extern "C" int __cdecl sub_429650(int, int, char);

int CRobloxApp::f(int a, int b, int c)
{
    if (c == 2) {
        int v = a;
        if (*(const type_info*)0x889160 == *(const type_info*)v) {
            return v;
        }
        return 0;
    }
    return sub_429650(a, b, 0);
}
