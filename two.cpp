int getSize(Node* node)
{
   if(node!=NULL)
   {
       return 1+getSize(node->left)+getSize(node->right);
   }
   else
   return 0;
}