// from server: 100% by king_originala
// roc 2008-06 006001d0  unit: RBX::VTool::?$BoundPropGetSet  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006001d0
//
// 006001d0  8b442404             mov eax, dword ptr [esp + 4]
// 006001d4  56                   push esi
// 006001d5  57                   push edi
// 006001d6  8bf1                 mov esi, ecx
// 006001d8  85c0                 test eax, eax
// 006001da  7405                 je 0x6001e1
// 006001dc  8d78ec               lea edi, [eax - 0x14]
// 006001df  eb02                 jmp 0x6001e3
// 006001e1  33ff                 xor edi, edi
// 006001e3  8b460c               mov eax, dword ptr [esi + 0xc]
// 006001e6  8b8fc0010000         mov ecx, dword ptr [edi + 0x1c0]
// 006001ec  8b1408               mov edx, dword ptr [eax + ecx]
// 006001ef  035608               add edx, dword ptr [esi + 8]
// 006001f2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006001f6  8a09                 mov cl, byte ptr [ecx]
// 006001f8  388c3ac0010000       cmp byte ptr [edx + edi + 0x1c0], cl
// 006001ff  8d843ac0010000       lea eax, [edx + edi + 0x1c0]
// 00600206  7430                 je 0x600238
// 00600208  8808                 mov byte ptr [eax], cl
// 0060020a  8b4610               mov eax, dword ptr [esi + 0x10]
// 0060020d  85c0                 test eax, eax
// 0060020f  741c                 je 0x60022d
// 00600211  8b5604               mov edx, dword ptr [esi + 4]
// 00600214  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00600217  52                   push edx
// 00600218  8b97c0010000         mov edx, dword ptr [edi + 0x1c0]
// 0060021e  8b0c11               mov ecx, dword ptr [ecx + edx]
// 00600221  034e14               add ecx, dword ptr [esi + 0x14]
// 00600224  8d8c39c0010000       lea ecx, [ecx + edi + 0x1c0]
// 0060022b  ffd0                 call eax
// 0060022d  8b5604               mov edx, dword ptr [esi + 4]
// 00600230  52                   push edx
// 00600231  8bcf                 mov ecx, edi
// 00600233  e8c8d8e0ff           call 0x40db00
// 00600238  5f                   pop edi
// 00600239  5e                   pop esi
// 0060023a  c20800               ret 8

struct Prefix {
    char padding[20];
};

struct Argument {
    char padding[428];
    int* virtualTable;
};

struct Object : Prefix, Argument {
    void notify(void* property);
};

typedef void (__thiscall *Callback)(void*, void*);

struct S {
    void* reserved;
    void* property;
    int valueOffset;
    int valueVirtualOffset;
    Callback callback;
    int callbackOffset;
    int callbackVirtualOffset;

    void set(Argument* argument, const bool& value);
};

void S::set(Argument* argument, const bool& value)
{
    Object* object = static_cast<Object*>(argument);
    bool* destination = reinterpret_cast<bool*>(
        reinterpret_cast<char*>(object) + 448 +
        *reinterpret_cast<int*>(
            reinterpret_cast<char*>(object->virtualTable) + valueVirtualOffset) +
        valueOffset);

    if (*destination != value) {
        *destination = value;
        if (callback) {
            callback(
                reinterpret_cast<char*>(object) + 448 +
                *reinterpret_cast<int*>(
                    reinterpret_cast<char*>(object->virtualTable) +
                    callbackVirtualOffset) +
                callbackOffset,
                property);
        }
        object->notify(property);
    }
}
