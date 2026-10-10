// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct Node {
    int field0;
    RefCounted* ptr;
};

struct TreeCtrlNode {
    Node* FindNode(int, int);
    Node* GetNode(int);
};

struct Helper {
    void Init();
};

extern "C" void __cdecl sub_444B70(void*);
extern "C" void* __cdecl sub_442C60(void*, int, int);
extern "C" void* __cdecl sub_422390(void*);

Node* TreeCtrlNode::FindNode(int a, int b) {
    void* local;
    sub_444B70(&local);
    Node* result = 0;
    void* found = sub_442C60(local, a, b);
    if (found) {
        result = (Node*)sub_422390(found);
    }
    if (local) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)local + 4), -1) == 1) {
            (*(void(__thiscall**)(void*))(*(int*)local + 4))(local);
            if (_InterlockedExchangeAdd((volatile long*)((char*)local + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))(*(int*)local + 8))(local);
            }
        }
    }
    return result;
}
