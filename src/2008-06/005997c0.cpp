// from server: 100% by tester
// roc 2008-06 005997c0  unit: RBX::PartInstance  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005997c0
//
// 005997c0  b001                 mov al, 1
// 005997c2  888198030000         mov byte ptr [ecx + 0x398], al
// 005997c8  888141010000         mov byte ptr [ecx + 0x141], al
// 005997ce  8881b1030000         mov byte ptr [ecx + 0x3b1], al
// 005997d4  81c1cc010000         add ecx, 0x1cc
// 005997da  e8613d0400           call 0x5dd540
// 005997df  c20400               ret 4

struct PartInstance {
    void setShouldRender(int);
};

extern void __fastcall shouldRenderSetDirty(void*);

void PartInstance::setShouldRender(int)
{
    *(char*)((char*)this + 0x398) = 1;
    *(char*)((char*)this + 0x141) = 1;
    *(char*)((char*)this + 0x3b1) = 1;
    shouldRenderSetDirty((char*)this + 0x1cc);
}
