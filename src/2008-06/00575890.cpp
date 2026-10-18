// from server: 22% by colin
struct DataModel;

struct InputObject {
    int type;
    int pad;
    int key;
    int pad2;
};

struct Selection {
    int select(int);
};

struct RunService {
    char padding[0x170];
    struct {
        char storage[0x20];
        void fire(int, int);
    } stateSignal;
    struct {
        char storage[0x24];
        void fire(int);
    } valueSignal;
};

struct DataModel {
    char pad0[0x1fc];
    Selection* selection;
    char pad1[0xc];
    RunService* runService;

    void handleInput(InputObject* input, int* result);
};

void func_0047d410();
void* func_0049aca0(DataModel*);
void func_00554da0(RunService*, int);
void func_005b17c0(void*);
int func_005fc0a0(Selection*, int);
void func_005fdfa0(void*);

void DataModel::handleInput(InputObject* input, int* result) {
    int t = input->type;
    if (t == 8) {
        int k = input->key;
        if (k > 0x30 && k <= 0x39) {
            if (func_005fc0a0(selection, k - 0x30)) {
                result[0] = 1;
                result[1] = 0;
                return;
            }
        } else if (k == 0x2c) {
            result[0] = 0;
            result[1] = 0;
            return;
        } else if (k == 8) {
            void* c = func_0049aca0(this);
            if (c) {
                func_005fdfa0(c);
            }
        } else if (k == 0x1b) {
            func_00554da0(runService, 2);
        }
        result[0] = 0;
        result[1] = 0;
        return;
    }
    if (t == 9) {
        result[0] = 0;
        result[1] = 0;
        return;
    }
    if (t == 10) {
        int k = input->key;
        if (k == 0x2e) {
            func_0047d410();
        } else if (k == 0x2f) {
            func_0047d410();
        } else if (k == 0x30) {
            void* c = func_0049aca0(this);
            if (c) {
                func_005b17c0(c);
            }
        }
        result[0] = 0;
        result[1] = 0;
        return;
    }
    result[0] = 0;
    result[1] = 0;
}
