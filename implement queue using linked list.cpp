void MyQueue:: push(int x)
{
        // Your Code
        QueueNode *temp=new QueueNode(x);
        if(front==NULL)
        {
            front=rear=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code
        if(front==-NULL)
        return -1;
        int data=front->data;
        front=front->next;
        return data;
}
