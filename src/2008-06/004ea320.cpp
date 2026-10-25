// from server: 100% by tester
// roc 2008-06 004ea320  unit: RBX::ViewNew::Texture  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea320
//
// 004ea320  83ec08               sub esp, 8
// 004ea323  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ea327  56                   push esi
// 004ea328  8bf1                 mov esi, ecx
// 004ea32a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ea32e  8d542404             lea edx, [esp + 4]
// 004ea332  52                   push edx
// 004ea333  89442408             mov dword ptr [esp + 8], eax
// 004ea337  894c240c             mov dword ptr [esp + 0xc], ecx
// 004ea33b  c70600000000         mov dword ptr [esi], 0
// 004ea341  e8aaff1100           call 0x60a2f0
// 004ea346  83c404               add esp, 4
// 004ea349  84c0                 test al, al
// 004ea34b  7523                 jne 0x4ea370
// 004ea34d  8d4608               lea eax, [esi + 8]
// 004ea350  85c0                 test eax, eax
// 004ea352  740d                 je 0x4ea361
// 004ea354  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ea358  8b542408             mov edx, dword ptr [esp + 8]
// 004ea35c  8908                 mov dword ptr [eax], ecx
// 004ea35e  895004               mov dword ptr [eax + 4], edx
// 004ea361  c706746f8200         mov dword ptr [esi], 0x826f74
// 004ea367  8bc6                 mov eax, esi
// 004ea369  5e                   pop esi
// 004ea36a  83c408               add esp, 8
// 004ea36d  c20c00               ret 0xc
// 004ea370  c70600000000         mov dword ptr [esi], 0
// 004ea376  8bc6                 mov eax, esi
// 004ea378  5e                   pop esi
// 004ea379  83c408               add esp, 8
// 004ea37c  c20c00               ret 0xc

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
