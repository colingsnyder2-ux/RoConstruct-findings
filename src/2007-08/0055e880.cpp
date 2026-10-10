// from server: 80% by colin
struct DataState;
struct Selection;

struct DataModel {
    char pad[0x188];
    Selection* selection;
};

struct SelectAllCommand {
    char pad[0xc];
    DataModel* dataModel;
    void doIt(DataState* dataState);
};

struct Helper0055e290 {
    void method();
};

struct Helper0057e0f0 {
    void method();
};

void SelectAllCommand::doIt(DataState* dataState)
{
    DataModel* dm = this->dataModel;
    ((Helper0055e290*)dm)->method();
    ((Helper0057e0f0*)this->dataModel->selection)->method();
}
