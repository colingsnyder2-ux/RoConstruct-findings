// from server: 100% by colin
// roc 2007-08 0057ae30  unit: RBX::ArrowTool  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ae30
//
// 0057ae30  56                   push esi
// 0057ae31  8bf1                 mov esi, ecx
// 0057ae33  8b8e1c030000         mov ecx, dword ptr [esi + 0x31c]
// 0057ae39  85c9                 test ecx, ecx
// 0057ae3b  57                   push edi
// 0057ae3c  7409                 je 0x57ae47
// 0057ae3e  8b01                 mov eax, dword ptr [ecx]
// 0057ae40  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0057ae43  6a01                 push 1
// 0057ae45  ffd2                 call edx
// 0057ae47  56                   push esi
// 0057ae48  c7861c03000000000000 mov dword ptr [esi + 0x31c], 0
// 0057ae52  e809fdffff           call 0x57ab60
// 0057ae57  8b8e18030000         mov ecx, dword ptr [esi + 0x318]
// 0057ae5d  8bf8                 mov edi, eax
// 0057ae5f  83c404               add esp, 4
// 0057ae62  3bf9                 cmp edi, ecx
// 0057ae64  740d                 je 0x57ae73
// 0057ae66  85c9                 test ecx, ecx
// 0057ae68  7409                 je 0x57ae73
// 0057ae6a  8b01                 mov eax, dword ptr [ecx]
// 0057ae6c  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0057ae6f  6a01                 push 1
// 0057ae71  ffd2                 call edx
// 0057ae73  89be18030000         mov dword ptr [esi + 0x318], edi
// 0057ae79  5f                   pop edi
// 0057ae7a  5e                   pop esi
// 0057ae7b  c3                   ret 

struct ArrowTool {
    char pad[0x318];
    void* field_318;
    void* field_31c;
    void destroy();
};

extern void* __cdecl sub_57AB60(void*);

void ArrowTool::destroy()
{
    if (field_31c) {
        (*(void (__thiscall**)(void*, int))(*(int*)field_31c + 0x2c))(field_31c, 1);
    }
    field_31c = 0;
    void* p = sub_57AB60(this);
    void* old = field_318;
    if (p != old) {
        if (old) {
            (*(void (__thiscall**)(void*, int))(*(int*)old + 0x2c))(old, 1);
        }
    }
    field_318 = p;
}
