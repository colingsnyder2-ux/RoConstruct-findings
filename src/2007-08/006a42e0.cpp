// from server: 77% by colin
// roc 2007-08 006a42e0  unit: CXTPShortcutManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a42e0
//
// 006a42e0  83792800             cmp dword ptr [ecx + 0x28], 0
// 006a42e4  7f28                 jg 0x6a430e
// 006a42e6  8b01                 mov eax, dword ptr [ecx]
// 006a42e8  8b5074               mov edx, dword ptr [eax + 0x74]
// 006a42eb  ffd2                 call edx
// 006a42ed  85c0                 test eax, eax
// 006a42ef  741d                 je 0x6a430e
// 006a42f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a42f5  8b542404             mov edx, dword ptr [esp + 4]
// 006a42f9  51                   push ecx
// 006a42fa  50                   push eax
// 006a42fb  52                   push edx
// 006a42fc  ff15a8ec7700         call dword ptr [0x77eca8]
// 006a4302  85c0                 test eax, eax
// 006a4304  7408                 je 0x6a430e
// 006a4306  b801000000           mov eax, 1
// 006a430b  c20800               ret 8
// 006a430e  33c0                 xor eax, eax
// 006a4310  c20800               ret 8

extern "C" int __stdcall TranslateAcceleratorA(void*, void*, void*);

struct CXTPShortcutManager
{
    int field_0x28;
    int TranslateAccelerator(void* hwnd, void* msg);
};

int CXTPShortcutManager::TranslateAccelerator(void* hwnd, void* msg)
{
    if (field_0x28 <= 0)
    {
        int (*fn)(void*) = *(int (**)(void*))((*(int*)this) + 0x74);
        void* accel = (void*)fn(this);
        if (accel != 0)
        {
            if (TranslateAcceleratorA(hwnd, accel, msg) != 0)
                return 1;
        }
    }
    return 0;
}
