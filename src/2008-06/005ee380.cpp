// from server: 100% by colin
// roc 2008-06 005ee380  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee380
//
// 005ee380  51                   push ecx
// 005ee381  53                   push ebx
// 005ee382  56                   push esi
// 005ee383  57                   push edi
// 005ee384  6820b19700           push 0x97b120
// 005ee389  6890d65e00           push 0x5ed690
// 005ee38e  8bd9                 mov ebx, ecx
// 005ee390  e89b8ff6ff           call 0x557330
// 005ee395  83c408               add esp, 8
// 005ee398  e893f2ffff           call 0x5ed630
// 005ee39d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005ee3a1  8bf0                 mov esi, eax
// 005ee3a3  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 005ee3a6  7343                 jae 0x5ee3eb
// 005ee3a8  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 005ee3ae  2b86c4000000         sub eax, dword ptr [esi + 0xc4]
// 005ee3b4  c1f802               sar eax, 2
// 005ee3b7  3bf8                 cmp edi, eax
// 005ee3b9  7206                 jb 0x5ee3c1
// 005ee3bb  ff1590288000         call dword ptr [0x802890]
// 005ee3c1  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 005ee3c7  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 005ee3ca  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005ee3cd  8954240c             mov dword ptr [esp + 0xc], edx
// 005ee3d1  8b01                 mov eax, dword ptr [ecx]
// 005ee3d3  8b400c               mov eax, dword ptr [eax + 0xc]
// 005ee3d6  8d54240c             lea edx, [esp + 0xc]
// 005ee3da  52                   push edx
// 005ee3db  8b542418             mov edx, dword ptr [esp + 0x18]
// 005ee3df  52                   push edx
// 005ee3e0  ffd0                 call eax
// 005ee3e2  5f                   pop edi
// 005ee3e3  5e                   pop esi
// 005ee3e4  b001                 mov al, 1
// 005ee3e6  5b                   pop ebx
// 005ee3e7  59                   pop ecx
// 005ee3e8  c20800               ret 8
// 005ee3eb  5f                   pop edi
// 005ee3ec  5e                   pop esi
// 005ee3ed  32c0                 xor al, al
// 005ee3ef  5b                   pop ebx
// 005ee3f0  59                   pop ecx
// 005ee3f1  c20800               ret 8

struct EnumDescriptor {
    char padding0[0x28];
    unsigned int count;
    char padding1[0x98];
    int* begin;
    int* end;
};

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void* object, const int& value);
};

struct S {
    char padding[0x1c];
    Setter* setter;
    bool f(void* object, unsigned int index);
};

extern char initializationState;
extern void __cdecl initializeDescriptor();
extern void __cdecl ensureInitialized(void (__cdecl *callback)(), void* state);
extern EnumDescriptor* __cdecl getDescriptor();
extern "C" void (__cdecl * const __imp__invalid_parameter_noinfo)();

bool S::f(void* object, unsigned int index)
{
    int value;
    ensureInitialized(initializeDescriptor, &initializationState);
    EnumDescriptor* descriptor = getDescriptor();
    if (index < descriptor->count) {
        if (index >= static_cast<unsigned int>(descriptor->end - descriptor->begin))
            __imp__invalid_parameter_noinfo();

        value = descriptor->begin[index];
        setter->set(object, value);
        return true;
    }
    return false;
}
