// from server: 100% by tester
// roc 2008-06 004e9e80  unit: RBX::ViewNew::Texture  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e9e80
//
// 004e9e80  83ec08               sub esp, 8
// 004e9e83  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e9e87  56                   push esi
// 004e9e88  8bf1                 mov esi, ecx
// 004e9e8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e9e8e  8d542404             lea edx, [esp + 4]
// 004e9e92  52                   push edx
// 004e9e93  89442408             mov dword ptr [esp + 8], eax
// 004e9e97  894c240c             mov dword ptr [esp + 0xc], ecx
// 004e9e9b  c70600000000         mov dword ptr [esi], 0
// 004e9ea1  e84a041200           call 0x60a2f0
// 004e9ea6  83c404               add esp, 4
// 004e9ea9  84c0                 test al, al
// 004e9eab  7523                 jne 0x4e9ed0
// 004e9ead  8d4608               lea eax, [esi + 8]
// 004e9eb0  85c0                 test eax, eax
// 004e9eb2  740d                 je 0x4e9ec1
// 004e9eb4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e9eb8  8b542408             mov edx, dword ptr [esp + 8]
// 004e9ebc  8908                 mov dword ptr [eax], ecx
// 004e9ebe  895004               mov dword ptr [eax + 4], edx
// 004e9ec1  c706a86e8200         mov dword ptr [esi], 0x826ea8
// 004e9ec7  8bc6                 mov eax, esi
// 004e9ec9  5e                   pop esi
// 004e9eca  83c408               add esp, 8
// 004e9ecd  c20c00               ret 0xc
// 004e9ed0  c70600000000         mov dword ptr [esi], 0
// 004e9ed6  8bc6                 mov eax, esi
// 004e9ed8  5e                   pop esi
// 004e9ed9  83c408               add esp, 8
// 004e9edc  c20c00               ret 0xc

struct S {
    int f(int a, int b, int c);
};

extern "C" bool __cdecl func_0060a2f0(int* p);

int S::f(int a, int b, int c)
{
    int local[2];
    local[0] = a;
    local[1] = b;
    *(int*)this = 0;
    if (!func_0060a2f0(local)) {
        int* p = (int*)((char*)this + 8);
        if (p) {
            p[0] = local[0];
            p[1] = local[1];
        }
        *(int*)this = 0x826be8;
        return (int)this;
    }
    *(int*)this = 0;
    return (int)this;
}
