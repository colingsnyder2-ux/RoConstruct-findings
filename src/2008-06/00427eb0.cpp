// from server: 100% by king_originala
// roc 2008-06 00427eb0  unit: RobloxCrashReporter  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427eb0
//
// 00427eb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00427eb4  83f803               cmp eax, 3
// 00427eb7  7442                 je 0x427efb
// 00427eb9  85c0                 test eax, eax
// 00427ebb  750d                 jne 0x427eca
// 00427ebd  8b442404             mov eax, dword ptr [esp + 4]
// 00427ec1  8b08                 mov ecx, dword ptr [eax]
// 00427ec3  8b542408             mov edx, dword ptr [esp + 8]
// 00427ec7  890a                 mov dword ptr [edx], ecx
// 00427ec9  c3                   ret 
// 00427eca  83f801               cmp eax, 1
// 00427ecd  750b                 jne 0x427eda
// 00427ecf  8b442408             mov eax, dword ptr [esp + 8]
// 00427ed3  c70000000000         mov dword ptr [eax], 0
// 00427ed9  c3                   ret 
// 00427eda  56                   push esi
// 00427edb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00427edf  8b0e                 mov ecx, dword ptr [esi]
// 00427ee1  68e4e49200           push 0x92e4e4
// 00427ee6  ff1578288000         call dword ptr [0x802878]
// 00427eec  0fb6c8               movzx ecx, al
// 00427eef  f7d9                 neg ecx
// 00427ef1  1bc9                 sbb ecx, ecx
// 00427ef3  234c2408             and ecx, dword ptr [esp + 8]
// 00427ef7  890e                 mov dword ptr [esi], ecx
// 00427ef9  5e                   pop esi
// 00427efa  c3                   ret 
// 00427efb  8b542408             mov edx, dword ptr [esp + 8]
// 00427eff  c702e4e49200         mov dword ptr [edx], 0x92e4e4
// 00427f05  c3                   ret 

struct TypeInfo {
    bool operator==(const TypeInfo&) const;
};

extern TypeInfo targetType;
extern bool (__thiscall *typeInfoEqual)(const TypeInfo*, const TypeInfo&);

void manage(void* source, void** destination, int operation)
{
    if (operation != 3) {
        if (operation == 0) {
            *destination = *static_cast<void**>(source);
            return;
        }
        if (operation == 1) {
            *destination = 0;
            return;
        }
        *destination = typeInfoEqual(static_cast<TypeInfo*>(*destination), targetType)
            ? source : 0;
    } else {
        *destination = &targetType;
    }
}
