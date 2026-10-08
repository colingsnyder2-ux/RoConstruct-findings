// from server: 89% by colin
// roc 2007-08 00635450  unit: MyXTPCommandBars  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635450
//
// 00635450  56                   push esi
// 00635451  57                   push edi
// 00635452  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00635456  8bf1                 mov esi, ecx
// 00635458  8b06                 mov eax, dword ptr [esi]
// 0063545a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0063545d  57                   push edi
// 0063545e  ffd2                 call edx
// 00635460  85c0                 test eax, eax
// 00635462  741f                 je 0x635483
// 00635464  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00635467  81c1a8000000         add ecx, 0xa8
// 0063546d  57                   push edi
// 0063546e  e82dffffff           call 0x6353a0
// 00635473  c70001000000         mov dword ptr [eax], 1
// 00635479  8b4674               mov eax, dword ptr [esi + 0x74]
// 0063547c  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 00635483  5f                   pop edi
// 00635484  5e                   pop esi
// 00635485  c20400               ret 4

struct MyXTPCommandBars
{
    void sub_00635450(int);
};

extern "C" int __stdcall sub_006353a0(int, int);

void MyXTPCommandBars::sub_00635450(int arg)
{
    int result = (*(int (__thiscall **)(void *, int))(*(int *)this + 0x5c))(this, arg);
    if (result != 0)
    {
        int *p = (int *)sub_006353a0(*(int *)((char *)this + 0x74) + 0xa8, arg);
        *p = 1;
        *(int *)(*(int *)((char *)this + 0x74) + 0x4c) = 1;
    }
}
