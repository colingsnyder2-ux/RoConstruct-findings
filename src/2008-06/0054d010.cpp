// from server: 100% by king_originala
// roc 2008-06 0054d010  unit: RBX::RenderBase::Mesh  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054d010
//
// 0054d010  55                   push ebp
// 0054d011  8bec                 mov ebp, esp
// 0054d013  83ec2c               sub esp, 0x2c
// 0054d016  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 0054d019  8d45f0               lea eax, [ebp - 0x10]
// 0054d01c  50                   push eax
// 0054d01d  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054d020  e88b39ffff           call 0x5409b0
// 0054d025  8b08                 mov ecx, dword ptr [eax]
// 0054d027  8b5004               mov edx, dword ptr [eax + 4]
// 0054d02a  894df8               mov dword ptr [ebp - 8], ecx
// 0054d02d  8955fc               mov dword ptr [ebp - 4], edx
// 0054d030  8d45e0               lea eax, [ebp - 0x20]
// 0054d033  50                   push eax
// 0054d034  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054d037  e804210000           call 0x54f140
// 0054d03c  8b08                 mov ecx, dword ptr [eax]
// 0054d03e  8b5004               mov edx, dword ptr [eax + 4]
// 0054d041  894de8               mov dword ptr [ebp - 0x18], ecx
// 0054d044  8955ec               mov dword ptr [ebp - 0x14], edx
// 0054d047  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054d04a  50                   push eax
// 0054d04b  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054d04e  51                   push ecx
// 0054d04f  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0054d052  52                   push edx
// 0054d053  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0054d056  50                   push eax
// 0054d057  8d4dd8               lea ecx, [ebp - 0x28]
// 0054d05a  51                   push ecx
// 0054d05b  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054d05e  e82d150000           call 0x54e590
// 0054d063  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0054d066  8b4218               mov eax, dword ptr [edx + 0x18]
// 0054d069  50                   push eax
// 0054d06a  e8c1f5ffff           call 0x54c630
// 0054d06f  83c404               add esp, 4
// 0054d072  50                   push eax
// 0054d073  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054d076  83c110               add ecx, 0x10
// 0054d079  e882280000           call 0x54f900
// 0054d07e  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054d081  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0054d084  52                   push edx
// 0054d085  e8b6f5ffff           call 0x54c640
// 0054d08a  83c404               add esp, 4
// 0054d08d  50                   push eax
// 0054d08e  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054d091  83c110               add ecx, 0x10
// 0054d094  e867280000           call 0x54f900
// 0054d099  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 0054d09c  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0054d09f  51                   push ecx
// 0054d0a0  e8fb4cffff           call 0x541da0
// 0054d0a5  83c404               add esp, 4
// 0054d0a8  50                   push eax
// 0054d0a9  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054d0ac  83c110               add ecx, 0x10
// 0054d0af  e84c280000           call 0x54f900
// 0054d0b4  6a01                 push 1
// 0054d0b6  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0054d0b9  8b4218               mov eax, dword ptr [edx + 0x18]
// 0054d0bc  50                   push eax
// 0054d0bd  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054d0c0  83c10c               add ecx, 0xc
// 0054d0c3  e84865ffff           call 0x543610
// 0054d0c8  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054d0cb  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 0054d0d2  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0054d0d5  c7421c00000000       mov dword ptr [edx + 0x1c], 0
// 0054d0dc  8be5                 mov esp, ebp
// 0054d0de  5d                   pop ebp
// 0054d0df  c3                   ret 

#pragma optimize("", off)

struct Result {
    unsigned int first;
    unsigned int second;
};

struct VChunk {
    char padding[8];
};

extern void* __cdecl firstPointer(void* value);
extern void* __cdecl secondPointer(void* value);
extern char* __cdecl chunkPointer(VChunk* value);

struct Releaser {
    unsigned int storage;
    void __thiscall release(VChunk* value, int flag);
};

struct Sink {
    unsigned int storage[2];
    void __thiscall accept(void* value);
};

struct Mesh {
    char padding[12];
    Releaser releaser;
    Sink sink;
    VChunk* value;
    unsigned int count;

    Result* __thiscall firstResult(Result* result);
    Result* __thiscall secondResult(Result* result);
    Result* __thiscall combine(Result* result, Result second, Result first);
    void finish();
};

void Mesh::finish()
{
    struct Locals {
        Result combined;
        Result secondTemporary;
        Result second;
        Result firstTemporary;
        Result first;
    } locals;

    locals.first = *firstResult(&locals.firstTemporary);
    locals.second = *secondResult(&locals.secondTemporary);
    combine(&locals.combined, locals.second, locals.first);

    sink.accept(firstPointer(value));
    sink.accept(secondPointer(value));
    sink.accept(chunkPointer(value));
    releaser.release(value, 1);

    value = 0;
    count = 0;
}
