// from server: 100% by king_originala
// roc 2008-06 00541ef0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00541ef0
//
// 00541ef0  55                   push ebp
// 00541ef1  8bec                 mov ebp, esp
// 00541ef3  83ec08               sub esp, 8
// 00541ef6  894df8               mov dword ptr [ebp - 8], ecx
// 00541ef9  8b4508               mov eax, dword ptr [ebp + 8]
// 00541efc  8945fc               mov dword ptr [ebp - 4], eax
// 00541eff  eb06                 jmp 0x541f07
// 00541f01  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00541f04  894d08               mov dword ptr [ebp + 8], ecx
// 00541f07  8b55fc               mov edx, dword ptr [ebp - 4]
// 00541f0a  52                   push edx
// 00541f0b  e880feffff           call 0x541d90
// 00541f10  83c404               add esp, 4
// 00541f13  0fbe00               movsx eax, byte ptr [eax]
// 00541f16  85c0                 test eax, eax
// 00541f18  754a                 jne 0x541f64
// 00541f1a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00541f1d  51                   push ecx
// 00541f1e  e87dfeffff           call 0x541da0
// 00541f23  83c404               add esp, 4
// 00541f26  8b10                 mov edx, dword ptr [eax]
// 00541f28  52                   push edx
// 00541f29  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00541f2c  e8bfffffff           call 0x541ef0
// 00541f31  8b45fc               mov eax, dword ptr [ebp - 4]
// 00541f34  50                   push eax
// 00541f35  e8f6a60000           call 0x54c630
// 00541f3a  83c404               add esp, 4
// 00541f3d  8b08                 mov ecx, dword ptr [eax]
// 00541f3f  894dfc               mov dword ptr [ebp - 4], ecx
// 00541f42  8b5508               mov edx, dword ptr [ebp + 8]
// 00541f45  52                   push edx
// 00541f46  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00541f49  83c10c               add ecx, 0xc
// 00541f4c  e87f230000           call 0x5442d0
// 00541f51  6a01                 push 1
// 00541f53  8b4508               mov eax, dword ptr [ebp + 8]
// 00541f56  50                   push eax
// 00541f57  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00541f5a  83c10c               add ecx, 0xc
// 00541f5d  e8ae160000           call 0x543610
// 00541f62  eb9d                 jmp 0x541f01
// 00541f64  8be5                 mov esp, ebp
// 00541f66  5d                   pop ebp
// 00541f67  c20400               ret 4

#pragma optimize("", off)

struct VChunk;

char* __cdecl flag(VChunk*);
char* __cdecl child(VChunk*);
void* __cdecl next(VChunk*);

struct Helper {
    void remove(VChunk*);
    void destroy(VChunk*, int);
};

struct S {
    char reserved[12];
    Helper helper;

    void f(VChunk*);
};

void S::f(VChunk* p) {
    for (VChunk* current = p; !*flag(current); p = current) {
        f(*reinterpret_cast<VChunk**>(child(current)));
        current = *reinterpret_cast<VChunk**>(next(current));
        helper.remove(p);
        helper.destroy(p, 1);
    }
}
