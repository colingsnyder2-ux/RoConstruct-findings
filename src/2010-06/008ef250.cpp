// from server: 58% by atomic.potato
// roc 2010-06 008ef250  unit: Ogre::RbxMeshPartAdapter  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008ef250
//
// 008ef250  0f57c0               xorps xmm0, xmm0
// 008ef253  8bc1                 mov eax, ecx
// 008ef255  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ef259  894804               mov dword ptr [eax + 4], ecx
// 008ef25c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008ef260  c700b8a1a800         mov dword ptr [eax], 0xa8a1b8
// 008ef266  c7400800000000       mov dword ptr [eax + 8], 0
// 008ef26d  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 008ef272  8b11                 mov edx, dword ptr [ecx]
// 008ef274  895010               mov dword ptr [eax + 0x10], edx
// 008ef277  8b4904               mov ecx, dword ptr [ecx + 4]
// 008ef27a  894814               mov dword ptr [eax + 0x14], ecx
// 008ef27d  85c9                 test ecx, ecx
// 008ef27f  740c                 je 0x8ef28d
// 008ef281  83c104               add ecx, 4
// 008ef284  ba01000000           mov edx, 1
// 008ef289  f00fc111             lock xadd dword ptr [ecx], edx
// 008ef28d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008ef291  8b11                 mov edx, dword ptr [ecx]
// 008ef293  895018               mov dword ptr [eax + 0x18], edx
// 008ef296  8b4904               mov ecx, dword ptr [ecx + 4]
// 008ef299  89481c               mov dword ptr [eax + 0x1c], ecx
// 008ef29c  85c9                 test ecx, ecx
// 008ef29e  740c                 je 0x8ef2ac
// 008ef2a0  83c104               add ecx, 4
// 008ef2a3  ba01000000           mov edx, 1
// 008ef2a8  f00fc111             lock xadd dword ptr [ecx], edx
// 008ef2ac  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RbxMeshPartAdapter {
    void* vtable;
    int field4;
    int field8;
    float fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void construct(int, void*, void*);
};

void RbxMeshPartAdapter::construct(int a, void* b, void* c) {
    this->vtable = (void*)0xa8a1b8;
    this->field4 = a;
    this->field8 = 0;
    this->fieldC = 0.0f;
    this->field10 = *(void**)b;
    this->field14 = *(void**)((char*)b + 4);
    if (this->field14 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)this->field14 + 4), 1);
    }
    this->field18 = *(void**)c;
    this->field1C = *(void**)((char*)c + 4);
    if (this->field1C != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)this->field1C + 4), 1);
    }
}
