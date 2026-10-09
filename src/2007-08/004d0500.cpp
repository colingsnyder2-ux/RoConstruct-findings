// from server: 64% by colin
// roc 2007-08 004d0500  unit: RBX::View::PartChunk  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0500
//
// 004d0500  68f0374600           push 0x4637f0
// 004d0505  6a01                 push 1
// 004d0507  6a04                 push 4
// 004d0509  51                   push ecx
// 004d050a  e8e8051600           call 0x630af7
// 004d050f  c3                   ret 
// 004d0510  56                   push esi
// 004d0511  8bf1                 mov esi, ecx
// 004d0513  8b4618               mov eax, dword ptr [esi + 0x18]
// 004d0516  85c0                 test eax, eax
// 004d0518  742c                 je 0x4d0546
// 004d051a  83c004               add eax, 4
// 004d051d  50                   push eax
// 004d051e  ff15e8d27700         call dword ptr [0x77d2e8]
// 004d0524  85c0                 test eax, eax
// 004d0526  7517                 jne 0x4d053f
// 004d0528  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004d052b  e8a078f8ff           call 0x457dd0
// 004d0530  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004d0533  85c9                 test ecx, ecx
// 004d0535  7408                 je 0x4d053f
// 004d0537  8b01                 mov eax, dword ptr [ecx]
// 004d0539  8b10                 mov edx, dword ptr [eax]
// 004d053b  6a01                 push 1
// 004d053d  ffd2                 call edx
// 004d053f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004d0546  5e                   pop esi
// 004d0547  c3                   ret 

extern "C" int __stdcall InterlockedDecrement(int*);
extern "C" void __fastcall sub_457dd0(void*);

struct PartChunk
{
    char pad[0x18];
    void* field_18;
    void destroy();
};

void PartChunk::destroy()
{
    if (field_18)
    {
        if (InterlockedDecrement((int*)((char*)field_18 + 4)) == 0)
        {
            sub_457dd0(field_18);
            if (field_18)
            {
                void** vt = *(void***)field_18;
                ((void (__thiscall*)(void*, int))vt[0])(field_18, 1);
            }
        }
        field_18 = 0;
    }
}
