// from server: 97% by coldek
// roc 2008-06 00467ad0  unit: DxUserInput  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467ad0
//
// 00467ad0  83ec14               sub esp, 0x14
// 00467ad3  53                   push ebx
// 00467ad4  56                   push esi
// 00467ad5  57                   push edi
// 00467ad6  8bf1                 mov esi, ecx
// 00467ad8  8d7e34               lea edi, [esi + 0x34]
// 00467adb  57                   push edi
// 00467adc  ff15d4228000         call dword ptr [0x8022d4]
// 00467ae2  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 00467ae8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00467aeb  8d442410             lea eax, [esp + 0x10]
// 00467aef  50                   push eax
// 00467af0  52                   push edx
// 00467af1  ff15842d8000         call dword ptr [0x802d84]
// 00467af7  8b442418             mov eax, dword ptr [esp + 0x18]
// 00467afb  2b442410             sub eax, dword ptr [esp + 0x10]
// 00467aff  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00467b03  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00467b07  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00467b0b  8944240c             mov dword ptr [esp + 0xc], eax
// 00467b0f  db44240c             fild dword ptr [esp + 0xc]
// 00467b13  894c240c             mov dword ptr [esp + 0xc], ecx
// 00467b17  db44240c             fild dword ptr [esp + 0xc]
// 00467b1b  57                   push edi
// 00467b1c  d905ac9b8100         fld dword ptr [0x819bac]
// 00467b22  dcca                 fmul st(2), st(0)
// 00467b24  dec9                 fmulp st(1)
// 00467b26  d9c9                 fxch st(1)
// 00467b28  d84660               fadd dword ptr [esi + 0x60]
// 00467b2b  d91b                 fstp dword ptr [ebx]
// 00467b2d  d84664               fadd dword ptr [esi + 0x64]
// 00467b30  d95b04               fstp dword ptr [ebx + 4]
// 00467b33  ff15f4218000         call dword ptr [0x8021f4]
// 00467b39  5f                   pop edi
// 00467b3a  5e                   pop esi
// 00467b3b  8bc3                 mov eax, ebx
// 00467b3d  5b                   pop ebx
// 00467b3e  83c414               add esp, 0x14
// 00467b41  c20400               ret 4

// from server: 95% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc 2008-06 00467ad0  (agentH rewrite)

// from server: 84% by king_originala
// roc 2008-06 00467ad0  unit: DxUserInput  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467ad0
//
// 00467ad0  83ec14               sub esp, 0x14
// 00467ad3  53                   push ebx
// 00467ad4  56                   push esi
// 00467ad5  57                   push edi
// 00467ad6  8bf1                 mov esi, ecx
// 00467ad8  8d7e34               lea edi, [esi + 0x34]
// 00467adb  57                   push edi
// 00467adc  ff15d4228000         call dword ptr [0x8022d4]
// 00467ae2  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 00467ae8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00467aeb  8d442410             lea eax, [esp + 0x10]
// 00467aef  50                   push eax
// 00467af0  52                   push edx
// 00467af1  ff15842d8000         call dword ptr [0x802d84]
// 00467af7  8b442418             mov eax, dword ptr [esp + 0x18]
// 00467afb  2b442410             sub eax, dword ptr [esp + 0x10]
// 00467aff  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00467b03  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00467b07  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00467b0b  8944240c             mov dword ptr [esp + 0xc], eax
// 00467b0f  db44240c             fild dword ptr [esp + 0xc]
// 00467b13  894c240c             mov dword ptr [esp + 0xc], ecx
// 00467b17  db44240c             fild dword ptr [esp + 0xc]
// 00467b1b  57                   push edi
// 00467b1c  d905ac9b8100         fld dword ptr [0x819bac]
// 00467b22  dcca                 fmul st(2), st(0)
// 00467b24  dec9                 fmulp st(1)
// 00467b26  d9c9                 fxch st(1)
// 00467b28  d84660               fadd dword ptr [esi + 0x60]
// 00467b2b  d91b                 fstp dword ptr [ebx]
// 00467b2d  d84664               fadd dword ptr [esi + 0x64]
// 00467b30  d95b04               fstp dword ptr [ebx + 4]
// 00467b33  ff15f4218000         call dword ptr [0x8021f4]
// 00467b39  5f                   pop edi
// 00467b3a  5e                   pop esi
// 00467b3b  8bc3                 mov eax, ebx
// 00467b3d  5b                   pop ebx
// 00467b3e  83c414               add esp, 0x14
// 00467b41  c20400               ret 4

extern "C" {
    __declspec(dllimport) void __stdcall EnterCriticalSection(void*);
    __declspec(dllimport) void __stdcall LeaveCriticalSection(void*);
}

struct Rect {
    long left;
    long top;
    long right;
    long bottom;
};

extern "C" {
    __declspec(dllimport) int __stdcall GetClientRect(void*, Rect*);
}

struct WindowOwner {
    char reserved[0x20];
    void* window;
};

struct Vector2 {
    float x;
    float y;
};

struct DxUserInput {
    char reserved0[0x34];
    char criticalSection[0x2c];
    float offsetX;
    float offsetY;
    char reserved1[0x104];
    WindowOwner* owner;

    Vector2 getPosition();
};

Vector2 DxUserInput::getPosition()
{
    EnterCriticalSection(criticalSection);

    Rect rect;
    GetClientRect(owner->window, &rect);

    Vector2 size;
    size.x = static_cast<float>(rect.right - rect.left);
    size.y = static_cast<float>(rect.bottom - rect.top);
    Vector2 result;
    result.x = size.x * 0.5f + offsetX;
    result.y = size.y * 0.5f + offsetY;

    LeaveCriticalSection(criticalSection);
    return result;
}
