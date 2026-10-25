// from server: 100% by Espeon
// roc 2008-06 0043d790  unit: Vector3Item  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d790
//
// 0043d790  53                   push ebx
// 0043d791  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0043d795  56                   push esi
// 0043d796  57                   push edi
// 0043d797  53                   push ebx
// 0043d798  8bf1                 mov esi, ecx
// 0043d79a  e8d1e9ffff           call 0x43c170
// 0043d79f  83c624               add esi, 0x24
// 0043d7a2  bf03000000           mov edi, 3
// 0043d7a7  833e00               cmp dword ptr [esi], 0
// 0043d7aa  740f                 je 0x43d7bb
// 0043d7ac  8b06                 mov eax, dword ptr [esi]
// 0043d7ae  8d880c010000         lea ecx, [eax + 0x10c]
// 0043d7b4  8b01                 mov eax, dword ptr [ecx]
// 0043d7b6  8b10                 mov edx, dword ptr [eax]
// 0043d7b8  53                   push ebx
// 0043d7b9  ffd2                 call edx
// 0043d7bb  83c604               add esi, 4
// 0043d7be  83ef01               sub edi, 1
// 0043d7c1  75e4                 jne 0x43d7a7
// 0043d7c3  5f                   pop edi
// 0043d7c4  5e                   pop esi
// 0043d7c5  5b                   pop ebx
// 0043d7c6  c20400               ret 4

// from server: 91% by colin
struct CXTPPropertyGridItem {
    char reserved00[0x24];
    void* items[3];

    void setValue(void* value);
};

struct Vector3Item : CXTPPropertyGridItem {
    void setValue(void* value);
};

void Vector3Item::setValue(void* value)
{
    CXTPPropertyGridItem::setValue(value);
    for (int i = 0; i < 3; ++i) {
        if (items[i] != 0) {
            void** vtable = *(void***)((char*)items[i] + 0x10C);
            ((void (__thiscall*)(void*, void*))vtable[0])((char*)items[i] + 0x10C, value);
        }
    }
}

