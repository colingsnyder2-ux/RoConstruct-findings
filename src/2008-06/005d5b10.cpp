// from server: 100% by king_originala
// roc 2008-06 005d5b10  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5b10
//
// 005d5b10  8b442404             mov eax, dword ptr [esp + 4]
// 005d5b14  53                   push ebx
// 005d5b15  55                   push ebp
// 005d5b16  57                   push edi
// 005d5b17  8bf9                 mov edi, ecx
// 005d5b19  85c0                 test eax, eax
// 005d5b1b  7405                 je 0x5d5b22
// 005d5b1d  8d58ec               lea ebx, [eax - 0x14]
// 005d5b20  eb02                 jmp 0x5d5b24
// 005d5b22  33db                 xor ebx, ebx
// 005d5b24  8b4708               mov eax, dword ptr [edi + 8]
// 005d5b27  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005d5b2b  03c3                 add eax, ebx
// 005d5b2d  55                   push ebp
// 005d5b2e  50                   push eax
// 005d5b2f  e82c62f8ff           call 0x55bd60
// 005d5b34  83c408               add esp, 8
// 005d5b37  84c0                 test al, al
// 005d5b39  7433                 je 0x5d5b6e
// 005d5b3b  56                   push esi
// 005d5b3c  8b7708               mov esi, dword ptr [edi + 8]
// 005d5b3f  03f3                 add esi, ebx
// 005d5b41  55                   push ebp
// 005d5b42  8bce                 mov ecx, esi
// 005d5b44  ff150c248000         call dword ptr [0x80240c]
// 005d5b4a  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 005d5b4d  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005d5b50  8b4710               mov eax, dword ptr [edi + 0x10]
// 005d5b53  5e                   pop esi
// 005d5b54  85c0                 test eax, eax
// 005d5b56  740b                 je 0x5d5b63
// 005d5b58  8b5704               mov edx, dword ptr [edi + 4]
// 005d5b5b  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005d5b5e  52                   push edx
// 005d5b5f  03cb                 add ecx, ebx
// 005d5b61  ffd0                 call eax
// 005d5b63  8b4704               mov eax, dword ptr [edi + 4]
// 005d5b66  50                   push eax
// 005d5b67  8bcb                 mov ecx, ebx
// 005d5b69  e8927fe3ff           call 0x40db00
// 005d5b6e  5f                   pop edi
// 005d5b6f  5d                   pop ebp
// 005d5b70  5b                   pop ebx
// 005d5b71  c20800               ret 8

struct StringData
{
    char data[28];
};

struct Value
{
    StringData text;
    unsigned long extra;
};

extern bool __cdecl valueChanged(const Value*, const Value*);

struct Object
{
    void notify(void*);
};

typedef StringData& (__thiscall *StringAssign)(
    StringData*, const StringData&);

extern StringAssign stringAssign;

typedef void (__thiscall *Callback)(void*, void*);

struct Property
{
    void* reserved;
    void* descriptor;
    int valueOffset;
    void* reserved2;
    Callback callback;
    int callbackOffset;

    void set(char*, const Value*);
};

void Property::set(char* instance, const Value* value)
{
    char* object = instance ? instance - 20 : 0;

    if (valueChanged(
            reinterpret_cast<Value*>(object + valueOffset), value))
    {
        Value* destination =
            reinterpret_cast<Value*>(object + valueOffset);

        stringAssign(&destination->text, value->text);
        destination->extra = value->extra;

        if (callback)
            callback(object + callbackOffset, descriptor);

        reinterpret_cast<Object*>(object)->notify(descriptor);
    }
}
