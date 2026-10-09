// from server: 86% by colin
// roc 2007-08 00563500  unit: RBX::FixedCameraCommand  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563500
//
// 00563500  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00563503  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 00563509  8b5004               mov edx, dword ptr [eax + 4]
// 0056350c  81c128020000         add ecx, 0x228
// 00563512  56                   push esi
// 00563513  6a00                 push 0
// 00563515  ffd2                 call edx
// 00563517  8bc8                 mov ecx, eax
// 00563519  e8a2810300           call 0x59b6c0
// 0056351e  8b742408             mov esi, dword ptr [esp + 8]
// 00563522  6aff                 push -1
// 00563524  8bce                 mov ecx, esi
// 00563526  e885d3eaff           call 0x4108b0
// 0056352b  8b06                 mov eax, dword ptr [esi]
// 0056352d  8b5004               mov edx, dword ptr [eax + 4]
// 00563530  6a01                 push 1
// 00563532  8bce                 mov ecx, esi
// 00563534  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 0056353b  ffd2                 call edx
// 0056353d  5e                   pop esi
// 0056353e  c20400               ret 4

struct FixedCameraCommand {
    void execute(int);
};

struct Camera {
    char pad[0x228];
    struct VTable {
        void* unknown0;
        void* unknown4;
    } *vtable;
};

struct Command {
    char pad[4];
    int state;
    virtual void method1(int);
};

void __stdcall sub_59B6C0(void*);
void __stdcall sub_4108B0(int);

void FixedCameraCommand::execute(int arg) {
    Camera* cam = *(Camera**)((char*)this + 0xc);
    void* vt = *(void**)((char*)cam + 0x228);
    void* fn = *(void**)((char*)vt + 4);
    ((void (__thiscall*)(void*, int))fn)((char*)cam + 0x228, 0);
    sub_59B6C0((void*)0);
    Command* cmd = (Command*)arg;
    sub_4108B0((int)cmd);
    void** cmdVt = *(void***)cmd;
    void* cmdFn = cmdVt[1];
    cmd->state = -1;
    ((void (__thiscall*)(Command*, int))cmdFn)(cmd, 1);
}
