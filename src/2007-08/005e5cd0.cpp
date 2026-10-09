// from server: 79% by colin
// roc 2007-08 005e5cd0  unit: RBX::NewNullTool  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5cd0
//
// 005e5cd0  8b442404             mov eax, dword ptr [esp + 4]
// 005e5cd4  56                   push esi
// 005e5cd5  57                   push edi
// 005e5cd6  8bf1                 mov esi, ecx
// 005e5cd8  8d7e40               lea edi, [esi + 0x40]
// 005e5cdb  57                   push edi
// 005e5cdc  50                   push eax
// 005e5cdd  e82ee2ffff           call 0x5e3f10
// 005e5ce2  85c0                 test eax, eax
// 005e5ce4  7423                 je 0x5e5d09
// 005e5ce6  57                   push edi
// 005e5ce7  8bce                 mov ecx, esi
// 005e5ce9  e842dbffff           call 0x5e3830
// 005e5cee  84c0                 test al, al
// 005e5cf0  7417                 je 0x5e5d09
// 005e5cf2  6838cf7a00           push 0x7acf38
// 005e5cf7  8d4e20               lea ecx, [esi + 0x20]
// 005e5cfa  ff152ce67700         call dword ptr [0x77e62c]
// 005e5d00  5f                   pop edi
// 005e5d01  c6463c01             mov byte ptr [esi + 0x3c], 1
// 005e5d05  5e                   pop esi
// 005e5d06  c20400               ret 4
// 005e5d09  6860d27b00           push 0x7bd260
// 005e5d0e  8d4e20               lea ecx, [esi + 0x20]
// 005e5d11  ff152ce67700         call dword ptr [0x77e62c]
// 005e5d17  5f                   pop edi
// 005e5d18  c6463c00             mov byte ptr [esi + 0x3c], 0
// 005e5d1c  5e                   pop esi
// 005e5d1d  c20400               ret 4

struct NewNullTool {
    char pad[0x20];
    char cursor[0x1c];
    char hasWaypoint;
    void method1(int*);
    bool method2(char*);
};

extern "C" int __cdecl sub_005e3f10(int*, char*);
extern "C" void __stdcall sub_0077e62c_assign(char*, const char*);

void NewNullTool::method1(int* a)
{
    char* p = (char*)this + 0x40;
    if (sub_005e3f10(a, p)) {
        if (method2(p)) {
            sub_0077e62c_assign((char*)this + 0x20, (const char*)0x7acf38);
            *(char*)((char*)this + 0x3c) = 1;
            return;
        }
    }
    sub_0077e62c_assign((char*)this + 0x20, (const char*)0x7bd260);
    *(char*)((char*)this + 0x3c) = 0;
}
