// from server: 74% by tester
struct SceneManager {
    char pad0[4];
    void* field4;
    void setSkyEnabled(bool value);
};

extern "C" void __stdcall sub_4D7890(void*, int, int);

void SceneManager::setSkyEnabled(bool value) {
    void* p = field4;
    char* q = (char*)p + 8;
    sub_4D7890(q, 0, 1);
}
