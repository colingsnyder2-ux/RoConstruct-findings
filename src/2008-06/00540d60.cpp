// from server: 100% by king_originala
// roc 2008-06 00540d60  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00540d60
//
// 00540d60  55                   push ebp
// 00540d61  8bec                 mov ebp, esp
// 00540d63  51                   push ecx
// 00540d64  894dfc               mov dword ptr [ebp - 4], ecx
// 00540d67  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540d6a  e881160000           call 0x5423f0
// 00540d6f  8b00                 mov eax, dword ptr [eax]
// 00540d71  50                   push eax
// 00540d72  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540d75  e876110000           call 0x541ef0
// 00540d7a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540d7d  e86e160000           call 0x5423f0
// 00540d82  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540d85  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00540d88  8910                 mov dword ptr [eax], edx
// 00540d8a  8b45fc               mov eax, dword ptr [ebp - 4]
// 00540d8d  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 00540d94  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540d97  e844fb0000           call 0x5508e0
// 00540d9c  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540d9f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00540da2  8910                 mov dword ptr [eax], edx
// 00540da4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540da7  e814c10000           call 0x54cec0
// 00540dac  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540daf  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00540db2  8910                 mov dword ptr [eax], edx
// 00540db4  8be5                 mov esp, ebp
// 00540db6  5d                   pop ebp
// 00540db7  c3                   ret 

struct VChunk { char pad[8]; };

struct S {
    char pad[0x18];
    VChunk* chunk;
    int count;

    VChunk** slot();
    void release(VChunk*);
    VChunk** otherSlot();
    char* get();
    void reset();
};

#pragma optimize("", off)
void S::reset()
{
    release(*slot());
    *slot() = chunk;
    count = 0;
    *otherSlot() = chunk;
    *(VChunk**)get() = chunk;
}
