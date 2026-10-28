// from server: 0% by colin
struct ScoreHud {
    void addScores(int count, int value);
};

void ScoreHud::addScores(int count, int value) {
    int* p = (int*)this;
    while (count > 0) {
        if (p != 0) {
            ((void (__thiscall*)(void*, int))0x429a50)(p, value);
        }
        count--;
        p += 4;
    }
}
