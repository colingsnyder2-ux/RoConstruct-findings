// from server: 100% by king_originala
// roc 2008-06 0045d4c0  unit: CRobloxWnd  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045d4c0
//
// 0045d4c0  56                   push esi
// 0045d4c1  8bf1                 mov esi, ecx
// 0045d4c3  837e5c02             cmp dword ptr [esi + 0x5c], 2
// 0045d4c7  7513                 jne 0x45d4dc
// 0045d4c9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045d4cd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045d4d1  50                   push eax
// 0045d4d2  51                   push ecx
// 0045d4d3  8bce                 mov ecx, esi
// 0045d4d5  e8a6fdffff           call 0x45d280
// 0045d4da  eb0f                 jmp 0x45d4eb
// 0045d4dc  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0045d4e0  8b442408             mov eax, dword ptr [esp + 8]
// 0045d4e4  52                   push edx
// 0045d4e5  50                   push eax
// 0045d4e6  e805f7ffff           call 0x45cbf0
// 0045d4eb  33c9                 xor ecx, ecx
// 0045d4ed  837e5c02             cmp dword ptr [esi + 0x5c], 2
// 0045d4f1  0f94c1               sete cl
// 0045d4f4  890dc42e9400         mov dword ptr [0x942ec4], ecx
// 0045d4fa  e811b02100           call 0x678510
// 0045d4ff  3d003fab01           cmp eax, 0x1ab3f00
// 0045d504  5e                   pop esi
// 0045d505  7d0c                 jge 0x45d513
// 0045d507  d905ac9b8100         fld dword ptr [0x819bac]
// 0045d50d  d91df8269300         fstp dword ptr [0x9326f8]
// 0045d513  c20800               ret 8

extern int modeFlag;
extern const float resetValue;
extern float currentValue;

extern int __cdecl queryValue();

struct S {
    char padding[0x5c];
    int mode;

    void special(int, int);
    void ordinary(int, int);
    void update(int, int);
};

void S::update(int a, int b)
{
    if (mode == 2)
        special(a, b);
    else
        ordinary(a, b);

    modeFlag = (mode == 2);

    if (queryValue() < 0x1ab3f00)
        currentValue = resetValue;
}
