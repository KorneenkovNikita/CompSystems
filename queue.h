struct Queue {
    struct Node* Front;
    struct Node* Rear;
    int Size;
};

typedef struct Queue Queue;

//�������� ����
Node* CreateNode(int value, Node* previous);

//�������� �������
Queue* CreateQueue();

//���������� �������� � ����� �������
void QueuePush(Queue* queue, int value);

//�������� ������� �� �������
int QueueIsEmpty(Queue* queue);

//����������� �������� � ������ �������
int Peek(Queue* queue);

//��������� ������� �������
int QueueSize(Queue* queue);

//�������� �������� � ������ ������� � ��������� ���
int QueuePop(Queue* queue);

//������� ������, ������������ � �������
void PrintQueue(Queue* queue);