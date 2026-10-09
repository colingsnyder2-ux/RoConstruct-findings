// from server: 66% by colin
// roc 2007-08 00601710  unit: RBX::ScriptMouseCommand  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00601710
//
// 00601710  8bc1                 mov eax, ecx
// 00601712  33c9                 xor ecx, ecx
// 00601714  394c2404             cmp dword ptr [esp + 4], ecx
// 00601718  740e                 je 0x601728
// 0060171a  c740041c2b7c00       mov dword ptr [eax + 4], 0x7c2b1c
// 00601721  c74020cc4c7a00       mov dword ptr [eax + 0x20], 0x7a4ccc
// 00601728  8b5004               mov edx, dword ptr [eax + 4]
// 0060172b  d9ee                 fldz 
// 0060172d  c700ac4c7a00         mov dword ptr [eax], 0x7a4cac
// 00601733  8b5204               mov edx, dword ptr [edx + 4]
// 00601736  c7440204a44c7a00     mov dword ptr [edx + eax + 4], 0x7a4ca4
// 0060173e  8b5004               mov edx, dword ptr [eax + 4]
// 00601741  c700f42a7c00         mov dword ptr [eax], 0x7c2af4
// 00601747  8b5204               mov edx, dword ptr [edx + 4]
// 0060174a  c7440204ec2a7c00     mov dword ptr [edx + eax + 4], 0x7c2aec
// 00601752  884808               mov byte ptr [eax + 8], cl
// 00601755  884810               mov byte ptr [eax + 0x10], cl
// 00601758  d95014               fst dword ptr [eax + 0x14]
// 0060175b  d95018               fst dword ptr [eax + 0x18]
// 0060175e  d9581c               fstp dword ptr [eax + 0x1c]
// 00601761  c20400               ret 4

struct ScriptMouseCommand {
    void construct(int);
};

void ScriptMouseCommand::construct(int flag) {
    if (flag != 0) {
        *(int*)((char*)this + 4) = 0x7c2b1c;
        *(int*)((char*)this + 0x20) = 0x7a4ccc;
    }
    int* p = *(int**)((char*)this + 4);
    *(int*)this = 0x7a4cac;
    int* q = *(int**)((char*)p + 4);
    *(int*)((char*)q + (int)this + 4) = 0x7a4ca4;
    int* r = *(int**)((char*)this + 4);
    *(int*)this = 0x7c2af4;
    int* s = *(int**)((char*)r + 4);
    *(int*)((char*)s + (int)this + 4) = 0x7c2aec;
    *(char*)((char*)this + 8) = 0;
    *(char*)((char*)this + 0x10) = 0;
    *(float*)((char*)this + 0x14) = 0.0f;
    *(float*)((char*)this + 0x18) = 0.0f;
    *(float*)((char*)this + 0x1c) = 0.0f;
}
