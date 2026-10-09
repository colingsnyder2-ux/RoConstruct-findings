// from server: 77% by colin
// roc 2007-08 00627720  unit: RBX::CollisionStage  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627720
//
// 00627720  53                   push ebx
// 00627721  56                   push esi
// 00627722  57                   push edi
// 00627723  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00627727  8bf1                 mov esi, ecx
// 00627729  8b4f04               mov ecx, dword ptr [edi + 4]
// 0062772c  8b01                 mov eax, dword ptr [ecx]
// 0062772e  8b5004               mov edx, dword ptr [eax + 4]
// 00627731  ffd2                 call edx
// 00627733  8bd8                 mov ebx, eax
// 00627735  8b06                 mov eax, dword ptr [esi]
// 00627737  8b5004               mov edx, dword ptr [eax + 4]
// 0062773a  8bce                 mov ecx, esi
// 0062773c  ffd2                 call edx
// 0062773e  3bd8                 cmp ebx, eax
// 00627740  7e1c                 jle 0x62775e
// 00627742  8d442410             lea eax, [esp + 0x10]
// 00627746  50                   push eax
// 00627747  57                   push edi
// 00627748  8bce                 mov ecx, esi
// 0062774a  e871feffff           call 0x6275c0
// 0062774f  84c0                 test al, al
// 00627751  7528                 jne 0x62777b
// 00627753  8b4e08               mov ecx, dword ptr [esi + 8]
// 00627756  8b11                 mov edx, dword ptr [ecx]
// 00627758  8b4214               mov eax, dword ptr [edx + 0x14]
// 0062775b  57                   push edi
// 0062775c  ffd0                 call eax
// 0062775e  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 00627762  7d17                 jge 0x62777b
// 00627764  8b5618               mov edx, dword ptr [esi + 0x18]
// 00627767  8d4e14               lea ecx, [esi + 0x14]
// 0062776a  8d442410             lea eax, [esp + 0x10]
// 0062776e  50                   push eax
// 0062776f  897c2414             mov dword ptr [esp + 0x14], edi
// 00627773  89571c               mov dword ptr [edi + 0x1c], edx
// 00627776  e8d581fdff           call 0x5ff950
// 0062777b  5f                   pop edi
// 0062777c  5e                   pop esi
// 0062777d  5b                   pop ebx
// 0062777e  c20400               ret 4

struct CollisionStage {
    void func_00627720(int* arg);
};

struct Helper {
    char method(int*, int*);
};

extern "C" int __stdcall sub_005FF950(int*, int*);

void CollisionStage::func_00627720(int* arg)
{
    int* p = arg;
    int v = (*(int (__thiscall **)(int*))(*((int*)p[1])))((int*)p[1]);
    int w = (*(int (__thiscall **)(CollisionStage*))(*((int*)this)))(this);
    if (v > w) {
        int local;
        if (((Helper*)this)->method(p, &local)) {
            return;
        }
        (*(void (__thiscall **)(int*, int*))(*((int*)((char*)this + 8))))((int*)((char*)this + 8), p);
    }
    if (p[7] < 0) {
        int* q = (int*)((char*)this + 20);
        int r = *(int*)((char*)this + 24);
        int local2;
        local2 = (int)p;
        p[7] = r;
        sub_005FF950(q, &local2);
    }
}
